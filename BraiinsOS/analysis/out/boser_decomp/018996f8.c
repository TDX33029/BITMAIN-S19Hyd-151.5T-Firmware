// FUN_018996f8 @ 018996f8 size=144 calls_out=4 calls_in=2
// strings: 

void FUN_018996f8(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar1 = *(uint *)(*param_2 + 0x48);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0x40,&DAT_01d2571c);
  }
  if (uVar1 != 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_013070f0(0x40,uVar1,&DAT_01d21c7c);
  }
  local_60 = param_2[1];
  iStack_5c = param_2[2];
  iStack_58 = param_2[3];
  iStack_54 = param_2[4];
  iStack_50 = param_2[5];
  local_4c = param_2[6];
  iStack_48 = param_2[7];
  iStack_44 = param_2[8];
  iStack_40 = param_2[9];
  iStack_3c = param_2[10];
  local_38 = param_2[0xb];
  iStack_34 = param_2[0xc];
  iStack_30 = param_2[0xd];
  iStack_2c = param_2[0xe];
  iStack_28 = param_2[0xf];
  iStack_24 = param_2[0x10];
  FUN_01bca64c(&local_60);
  FUN_01bed4e2(param_1,&local_60,0x20);
  return;
}

