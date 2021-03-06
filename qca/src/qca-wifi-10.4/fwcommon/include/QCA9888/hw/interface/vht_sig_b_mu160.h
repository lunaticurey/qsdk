// Copyright (c) 2014 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _VHT_SIG_B_MU160_H_
#define _VHT_SIG_B_MU160_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	length[18:0], mcs[22:19], tail[28:23], reserved_0[31:29]
//	1	length_copy_a[18:0], mcs_copy_a[22:19], tail_copy_a[28:23], user_number_1[31:29]
//	2	length_copy_b[18:0], mcs_copy_b[22:19], tail_copy_b[28:23], reserved_2[31:29]
//	3	length_copy_c[18:0], mcs_copy_c[22:19], tail_copy_c[28:23], reserved_3[31:29]
//	4	length_copy_d[18:0], mcs_copy_d[22:19], tail_copy_d[28:23], reserved_4[31:29]
//	5	length_copy_e[18:0], mcs_copy_e[22:19], tail_copy_e[28:23], reserved_5[31:29]
//	6	length_copy_f[18:0], mcs_copy_f[22:19], tail_copy_f[28:23], mu_user_number[31:29]
//	7	length_copy_g[18:0], mcs_copy_g[22:19], tail_copy_g[28:23], user_number[31:29]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_VHT_SIG_B_MU160 8

struct vht_sig_b_mu160 {
    volatile uint32_t length                          : 19, //[18:0]
                      mcs                             :  4, //[22:19]
                      tail                            :  6, //[28:23]
                      reserved_0                      :  3; //[31:29]
    volatile uint32_t length_copy_a                   : 19, //[18:0]
                      mcs_copy_a                      :  4, //[22:19]
                      tail_copy_a                     :  6, //[28:23]
                      user_number_1                   :  3; //[31:29]
    volatile uint32_t length_copy_b                   : 19, //[18:0]
                      mcs_copy_b                      :  4, //[22:19]
                      tail_copy_b                     :  6, //[28:23]
                      reserved_2                      :  3; //[31:29]
    volatile uint32_t length_copy_c                   : 19, //[18:0]
                      mcs_copy_c                      :  4, //[22:19]
                      tail_copy_c                     :  6, //[28:23]
                      reserved_3                      :  3; //[31:29]
    volatile uint32_t length_copy_d                   : 19, //[18:0]
                      mcs_copy_d                      :  4, //[22:19]
                      tail_copy_d                     :  6, //[28:23]
                      reserved_4                      :  3; //[31:29]
    volatile uint32_t length_copy_e                   : 19, //[18:0]
                      mcs_copy_e                      :  4, //[22:19]
                      tail_copy_e                     :  6, //[28:23]
                      reserved_5                      :  3; //[31:29]
    volatile uint32_t length_copy_f                   : 19, //[18:0]
                      mcs_copy_f                      :  4, //[22:19]
                      tail_copy_f                     :  6, //[28:23]
                      mu_user_number                  :  3; //[31:29]
    volatile uint32_t length_copy_g                   : 19, //[18:0]
                      mcs_copy_g                      :  4, //[22:19]
                      tail_copy_g                     :  6, //[28:23]
                      user_number                     :  3; //[31:29]
};

/*

length
			
			VHT-SIG-B Length (in units of 4 octets) = ceiling
			(LENGTH/4)  <legal all>

mcs
			
			Modulation as described in vht_sig_a mcs field  <legal
			0-9>

tail
			
			Used to terminate the trellis of the convolutional
			decoder.
			
			Set to 0.  <legal 0>

reserved_0
			
			Not part of VHT-SIG-B.
			
			Reserved: Set to 0 and ignored on receive  <legal 0>

length_copy_a
			
			Same as length. This field is not valid for RX packets
			<legal all>

mcs_copy_a
			
			Same as mcs. This field is not valid for RX packets 
			<legal 0-9>

tail_copy_a
			
			Same as tail. This field is not valid for RX packets 
			<legal 0>

user_number_1
			
			Not part of VHT-SIG-B.
			
			Defines which user hardware this SIG-B word corresponds
			to during MU transmission. For MU packet reception, this
			field shall indicate the MU user number decoded by the PHY
			(for diagnostic purposes). <legal 0-2>

length_copy_b
			
			Same as length. This field is not valid for RX packets.
			<legal all>

mcs_copy_b
			
			Same as mcs. This field is not valid for RX packets. 
			<legal 0-9>

tail_copy_b
			
			Same as tail. This field is not valid for RX packets. 
			<legal 0>

reserved_2
			
			Not part of VHT-SIG-B.
			
			Reserved: Set to 0 and ignored on receive  <legal 0>

length_copy_c
			
			Same as length. This field is not valid for RX packets.
			<legal all>

mcs_copy_c
			
			Same as mcs. This field is not valid for RX packets. 
			<legal 0-9>

tail_copy_c
			
			Same as tail. This field is not valid for RX packets. 
			<legal 0>

reserved_3
			
			Not part of VHT-SIG-B.
			
			Reserved: Set to 0 and ignored on receive  <legal 0>

length_copy_d
			
			Same as length. This field is not valid for RX packets.
			<legal all>

mcs_copy_d
			
			Same as mcs. This field is not valid for RX packets. 
			<legal 0-9>

tail_copy_d
			
			Same as tail. This field is not valid for RX packets. 
			<legal 0>

reserved_4
			
			Not part of VHT-SIG-B.
			
			Reserved: Set to 0 and ignored on receive  <legal 0>

length_copy_e
			
			Same as length. This field is not valid for RX packets.
			<legal all>

mcs_copy_e
			
			Same as mcs. This field is not valid for RX packets. 
			<legal 0-9>

tail_copy_e
			
			Same as tail. This field is not valid for RX packets. 
			<legal 0>

reserved_5
			
			Not part of VHT-SIG-B.
			
			Reserved: Set to 0 and ignored on receive  <legal 0>

length_copy_f
			
			Same as length. This field is not valid for RX packets.
			<legal all>

mcs_copy_f
			
			Same as mcs. This field is not valid for RX packets. 
			<legal 0-9>

tail_copy_f
			
			Same as tail. This field is not valid for RX packets. 
			<legal 0>

mu_user_number
			
			Not part of VHT-SIG-B.
			
			Mapping from user number (BFer hardware specific) to
			mu_user_number. The reader is directed to the previous
			chapter (User Number) for a definition of the terms user and
			mu_user.  <legal 0-3>

length_copy_g
			
			Same as length. This field is not valid for RX packets.
			<legal all>

mcs_copy_g
			
			Same as mcs. This field is not valid for RX packets. 
			<legal 0-9>

tail_copy_g
			
			Same as tail. This field is not valid for RX packets. 
			<legal 0>

user_number
			
			Not part of VHT-SIG-B.
			
			Defines which user hardware this SIG-B word corresponds
			to during MU transmission. For MU packet reception, this
			field shall indicate the MU user number decoded by the PHY
			(for diagnostic purposes). <legal 0-2>
*/


/* Description		VHT_SIG_B_MU160_0_LENGTH
			
			VHT-SIG-B Length (in units of 4 octets) = ceiling
			(LENGTH/4)  <legal all>
*/
#define VHT_SIG_B_MU160_0_LENGTH_OFFSET                              0x00000000
#define VHT_SIG_B_MU160_0_LENGTH_LSB                                 0
#define VHT_SIG_B_MU160_0_LENGTH_MASK                                0x0007ffff

/* Description		VHT_SIG_B_MU160_0_MCS
			
			Modulation as described in vht_sig_a mcs field  <legal
			0-9>
*/
#define VHT_SIG_B_MU160_0_MCS_OFFSET                                 0x00000000
#define VHT_SIG_B_MU160_0_MCS_LSB                                    19
#define VHT_SIG_B_MU160_0_MCS_MASK                                   0x00780000

/* Description		VHT_SIG_B_MU160_0_TAIL
			
			Used to terminate the trellis of the convolutional
			decoder.
			
			Set to 0.  <legal 0>
*/
#define VHT_SIG_B_MU160_0_TAIL_OFFSET                                0x00000000
#define VHT_SIG_B_MU160_0_TAIL_LSB                                   23
#define VHT_SIG_B_MU160_0_TAIL_MASK                                  0x1f800000

/* Description		VHT_SIG_B_MU160_0_RESERVED_0
			
			Not part of VHT-SIG-B.
			
			Reserved: Set to 0 and ignored on receive  <legal 0>
*/
#define VHT_SIG_B_MU160_0_RESERVED_0_OFFSET                          0x00000000
#define VHT_SIG_B_MU160_0_RESERVED_0_LSB                             29
#define VHT_SIG_B_MU160_0_RESERVED_0_MASK                            0xe0000000

/* Description		VHT_SIG_B_MU160_1_LENGTH_COPY_A
			
			Same as length. This field is not valid for RX packets
			<legal all>
*/
#define VHT_SIG_B_MU160_1_LENGTH_COPY_A_OFFSET                       0x00000004
#define VHT_SIG_B_MU160_1_LENGTH_COPY_A_LSB                          0
#define VHT_SIG_B_MU160_1_LENGTH_COPY_A_MASK                         0x0007ffff

/* Description		VHT_SIG_B_MU160_1_MCS_COPY_A
			
			Same as mcs. This field is not valid for RX packets 
			<legal 0-9>
*/
#define VHT_SIG_B_MU160_1_MCS_COPY_A_OFFSET                          0x00000004
#define VHT_SIG_B_MU160_1_MCS_COPY_A_LSB                             19
#define VHT_SIG_B_MU160_1_MCS_COPY_A_MASK                            0x00780000

/* Description		VHT_SIG_B_MU160_1_TAIL_COPY_A
			
			Same as tail. This field is not valid for RX packets 
			<legal 0>
*/
#define VHT_SIG_B_MU160_1_TAIL_COPY_A_OFFSET                         0x00000004
#define VHT_SIG_B_MU160_1_TAIL_COPY_A_LSB                            23
#define VHT_SIG_B_MU160_1_TAIL_COPY_A_MASK                           0x1f800000

/* Description		VHT_SIG_B_MU160_1_USER_NUMBER_1
			
			Not part of VHT-SIG-B.
			
			Defines which user hardware this SIG-B word corresponds
			to during MU transmission. For MU packet reception, this
			field shall indicate the MU user number decoded by the PHY
			(for diagnostic purposes). <legal 0-2>
*/
#define VHT_SIG_B_MU160_1_USER_NUMBER_1_OFFSET                       0x00000004
#define VHT_SIG_B_MU160_1_USER_NUMBER_1_LSB                          29
#define VHT_SIG_B_MU160_1_USER_NUMBER_1_MASK                         0xe0000000

/* Description		VHT_SIG_B_MU160_2_LENGTH_COPY_B
			
			Same as length. This field is not valid for RX packets.
			<legal all>
*/
#define VHT_SIG_B_MU160_2_LENGTH_COPY_B_OFFSET                       0x00000008
#define VHT_SIG_B_MU160_2_LENGTH_COPY_B_LSB                          0
#define VHT_SIG_B_MU160_2_LENGTH_COPY_B_MASK                         0x0007ffff

/* Description		VHT_SIG_B_MU160_2_MCS_COPY_B
			
			Same as mcs. This field is not valid for RX packets. 
			<legal 0-9>
*/
#define VHT_SIG_B_MU160_2_MCS_COPY_B_OFFSET                          0x00000008
#define VHT_SIG_B_MU160_2_MCS_COPY_B_LSB                             19
#define VHT_SIG_B_MU160_2_MCS_COPY_B_MASK                            0x00780000

/* Description		VHT_SIG_B_MU160_2_TAIL_COPY_B
			
			Same as tail. This field is not valid for RX packets. 
			<legal 0>
*/
#define VHT_SIG_B_MU160_2_TAIL_COPY_B_OFFSET                         0x00000008
#define VHT_SIG_B_MU160_2_TAIL_COPY_B_LSB                            23
#define VHT_SIG_B_MU160_2_TAIL_COPY_B_MASK                           0x1f800000

/* Description		VHT_SIG_B_MU160_2_RESERVED_2
			
			Not part of VHT-SIG-B.
			
			Reserved: Set to 0 and ignored on receive  <legal 0>
*/
#define VHT_SIG_B_MU160_2_RESERVED_2_OFFSET                          0x00000008
#define VHT_SIG_B_MU160_2_RESERVED_2_LSB                             29
#define VHT_SIG_B_MU160_2_RESERVED_2_MASK                            0xe0000000

/* Description		VHT_SIG_B_MU160_3_LENGTH_COPY_C
			
			Same as length. This field is not valid for RX packets.
			<legal all>
*/
#define VHT_SIG_B_MU160_3_LENGTH_COPY_C_OFFSET                       0x0000000c
#define VHT_SIG_B_MU160_3_LENGTH_COPY_C_LSB                          0
#define VHT_SIG_B_MU160_3_LENGTH_COPY_C_MASK                         0x0007ffff

/* Description		VHT_SIG_B_MU160_3_MCS_COPY_C
			
			Same as mcs. This field is not valid for RX packets. 
			<legal 0-9>
*/
#define VHT_SIG_B_MU160_3_MCS_COPY_C_OFFSET                          0x0000000c
#define VHT_SIG_B_MU160_3_MCS_COPY_C_LSB                             19
#define VHT_SIG_B_MU160_3_MCS_COPY_C_MASK                            0x00780000

/* Description		VHT_SIG_B_MU160_3_TAIL_COPY_C
			
			Same as tail. This field is not valid for RX packets. 
			<legal 0>
*/
#define VHT_SIG_B_MU160_3_TAIL_COPY_C_OFFSET                         0x0000000c
#define VHT_SIG_B_MU160_3_TAIL_COPY_C_LSB                            23
#define VHT_SIG_B_MU160_3_TAIL_COPY_C_MASK                           0x1f800000

/* Description		VHT_SIG_B_MU160_3_RESERVED_3
			
			Not part of VHT-SIG-B.
			
			Reserved: Set to 0 and ignored on receive  <legal 0>
*/
#define VHT_SIG_B_MU160_3_RESERVED_3_OFFSET                          0x0000000c
#define VHT_SIG_B_MU160_3_RESERVED_3_LSB                             29
#define VHT_SIG_B_MU160_3_RESERVED_3_MASK                            0xe0000000

/* Description		VHT_SIG_B_MU160_4_LENGTH_COPY_D
			
			Same as length. This field is not valid for RX packets.
			<legal all>
*/
#define VHT_SIG_B_MU160_4_LENGTH_COPY_D_OFFSET                       0x00000010
#define VHT_SIG_B_MU160_4_LENGTH_COPY_D_LSB                          0
#define VHT_SIG_B_MU160_4_LENGTH_COPY_D_MASK                         0x0007ffff

/* Description		VHT_SIG_B_MU160_4_MCS_COPY_D
			
			Same as mcs. This field is not valid for RX packets. 
			<legal 0-9>
*/
#define VHT_SIG_B_MU160_4_MCS_COPY_D_OFFSET                          0x00000010
#define VHT_SIG_B_MU160_4_MCS_COPY_D_LSB                             19
#define VHT_SIG_B_MU160_4_MCS_COPY_D_MASK                            0x00780000

/* Description		VHT_SIG_B_MU160_4_TAIL_COPY_D
			
			Same as tail. This field is not valid for RX packets. 
			<legal 0>
*/
#define VHT_SIG_B_MU160_4_TAIL_COPY_D_OFFSET                         0x00000010
#define VHT_SIG_B_MU160_4_TAIL_COPY_D_LSB                            23
#define VHT_SIG_B_MU160_4_TAIL_COPY_D_MASK                           0x1f800000

/* Description		VHT_SIG_B_MU160_4_RESERVED_4
			
			Not part of VHT-SIG-B.
			
			Reserved: Set to 0 and ignored on receive  <legal 0>
*/
#define VHT_SIG_B_MU160_4_RESERVED_4_OFFSET                          0x00000010
#define VHT_SIG_B_MU160_4_RESERVED_4_LSB                             29
#define VHT_SIG_B_MU160_4_RESERVED_4_MASK                            0xe0000000

/* Description		VHT_SIG_B_MU160_5_LENGTH_COPY_E
			
			Same as length. This field is not valid for RX packets.
			<legal all>
*/
#define VHT_SIG_B_MU160_5_LENGTH_COPY_E_OFFSET                       0x00000014
#define VHT_SIG_B_MU160_5_LENGTH_COPY_E_LSB                          0
#define VHT_SIG_B_MU160_5_LENGTH_COPY_E_MASK                         0x0007ffff

/* Description		VHT_SIG_B_MU160_5_MCS_COPY_E
			
			Same as mcs. This field is not valid for RX packets. 
			<legal 0-9>
*/
#define VHT_SIG_B_MU160_5_MCS_COPY_E_OFFSET                          0x00000014
#define VHT_SIG_B_MU160_5_MCS_COPY_E_LSB                             19
#define VHT_SIG_B_MU160_5_MCS_COPY_E_MASK                            0x00780000

/* Description		VHT_SIG_B_MU160_5_TAIL_COPY_E
			
			Same as tail. This field is not valid for RX packets. 
			<legal 0>
*/
#define VHT_SIG_B_MU160_5_TAIL_COPY_E_OFFSET                         0x00000014
#define VHT_SIG_B_MU160_5_TAIL_COPY_E_LSB                            23
#define VHT_SIG_B_MU160_5_TAIL_COPY_E_MASK                           0x1f800000

/* Description		VHT_SIG_B_MU160_5_RESERVED_5
			
			Not part of VHT-SIG-B.
			
			Reserved: Set to 0 and ignored on receive  <legal 0>
*/
#define VHT_SIG_B_MU160_5_RESERVED_5_OFFSET                          0x00000014
#define VHT_SIG_B_MU160_5_RESERVED_5_LSB                             29
#define VHT_SIG_B_MU160_5_RESERVED_5_MASK                            0xe0000000

/* Description		VHT_SIG_B_MU160_6_LENGTH_COPY_F
			
			Same as length. This field is not valid for RX packets.
			<legal all>
*/
#define VHT_SIG_B_MU160_6_LENGTH_COPY_F_OFFSET                       0x00000018
#define VHT_SIG_B_MU160_6_LENGTH_COPY_F_LSB                          0
#define VHT_SIG_B_MU160_6_LENGTH_COPY_F_MASK                         0x0007ffff

/* Description		VHT_SIG_B_MU160_6_MCS_COPY_F
			
			Same as mcs. This field is not valid for RX packets. 
			<legal 0-9>
*/
#define VHT_SIG_B_MU160_6_MCS_COPY_F_OFFSET                          0x00000018
#define VHT_SIG_B_MU160_6_MCS_COPY_F_LSB                             19
#define VHT_SIG_B_MU160_6_MCS_COPY_F_MASK                            0x00780000

/* Description		VHT_SIG_B_MU160_6_TAIL_COPY_F
			
			Same as tail. This field is not valid for RX packets. 
			<legal 0>
*/
#define VHT_SIG_B_MU160_6_TAIL_COPY_F_OFFSET                         0x00000018
#define VHT_SIG_B_MU160_6_TAIL_COPY_F_LSB                            23
#define VHT_SIG_B_MU160_6_TAIL_COPY_F_MASK                           0x1f800000

/* Description		VHT_SIG_B_MU160_6_MU_USER_NUMBER
			
			Not part of VHT-SIG-B.
			
			Mapping from user number (BFer hardware specific) to
			mu_user_number. The reader is directed to the previous
			chapter (User Number) for a definition of the terms user and
			mu_user.  <legal 0-3>
*/
#define VHT_SIG_B_MU160_6_MU_USER_NUMBER_OFFSET                      0x00000018
#define VHT_SIG_B_MU160_6_MU_USER_NUMBER_LSB                         29
#define VHT_SIG_B_MU160_6_MU_USER_NUMBER_MASK                        0xe0000000

/* Description		VHT_SIG_B_MU160_7_LENGTH_COPY_G
			
			Same as length. This field is not valid for RX packets.
			<legal all>
*/
#define VHT_SIG_B_MU160_7_LENGTH_COPY_G_OFFSET                       0x0000001c
#define VHT_SIG_B_MU160_7_LENGTH_COPY_G_LSB                          0
#define VHT_SIG_B_MU160_7_LENGTH_COPY_G_MASK                         0x0007ffff

/* Description		VHT_SIG_B_MU160_7_MCS_COPY_G
			
			Same as mcs. This field is not valid for RX packets. 
			<legal 0-9>
*/
#define VHT_SIG_B_MU160_7_MCS_COPY_G_OFFSET                          0x0000001c
#define VHT_SIG_B_MU160_7_MCS_COPY_G_LSB                             19
#define VHT_SIG_B_MU160_7_MCS_COPY_G_MASK                            0x00780000

/* Description		VHT_SIG_B_MU160_7_TAIL_COPY_G
			
			Same as tail. This field is not valid for RX packets. 
			<legal 0>
*/
#define VHT_SIG_B_MU160_7_TAIL_COPY_G_OFFSET                         0x0000001c
#define VHT_SIG_B_MU160_7_TAIL_COPY_G_LSB                            23
#define VHT_SIG_B_MU160_7_TAIL_COPY_G_MASK                           0x1f800000

/* Description		VHT_SIG_B_MU160_7_USER_NUMBER
			
			Not part of VHT-SIG-B.
			
			Defines which user hardware this SIG-B word corresponds
			to during MU transmission. For MU packet reception, this
			field shall indicate the MU user number decoded by the PHY
			(for diagnostic purposes). <legal 0-2>
*/
#define VHT_SIG_B_MU160_7_USER_NUMBER_OFFSET                         0x0000001c
#define VHT_SIG_B_MU160_7_USER_NUMBER_LSB                            29
#define VHT_SIG_B_MU160_7_USER_NUMBER_MASK                           0xe0000000


#endif // _VHT_SIG_B_MU160_H_
