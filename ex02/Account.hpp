/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 16:40:16 by bmelo             #+#    #+#             */
/*   Updated: 2026/05/24 16:47:50 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ACCOUNT_H__
# define __ACCOUNT_H__

#include <iostream>

class Account
{
	public :

		typedef Account	t;
		static int	getNbAccounts(void);
		static int	getTotalAccounts(void);
		static int	getNbDeposits(void);
		static int	getNbWithdrawals(void);
		static void	displayAccountsInfos(void);

		Account(int initial_deposit);
		~Account(void);

		void		makeDeposit(int deposit);
		bool		makeWithdrawal(int withdrawal);
		int			checkAmount(void) const;
		void		displaySataus(void) const;

	private :

		static int	_nbAccounts;
		static int	_totalAmount;
		static int	_totalNbDeposit;
		static int	_totalNbWithdrawals;

		static void	_displayTimestamp(void);

		int			_accountIndex;
		int			_amount;
		int			_nbDeposits;
		int			_nbWithdrawals;

		Account(void);
};

#endif
