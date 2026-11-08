// FUN_01895524 @ 01895524 size=248 calls_out=6 calls_in=0
// strings: 

bool FUN_01895524(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar3 = *(uint *)(*param_3 + 0x10);
  if (0x30 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar3,0x30,&DAT_01d2136c);
  }
  bVar1 = true;
  if (uVar3 == 0x20) {
    local_40 = param_3[1];
    iStack_3c = param_3[2];
    iStack_38 = param_3[3];
    iStack_34 = param_3[4];
    local_30 = param_3[5];
    iStack_2c = param_3[6];
    iStack_28 = param_3[7];
    iStack_24 = param_3[8];
    FUN_01bcc1b4(&local_40);
    local_60 = local_40;
    iStack_5c = iStack_3c;
    iStack_58 = iStack_38;
    iStack_54 = iStack_34;
    local_50 = local_30;
    iStack_4c = iStack_2c;
    iStack_48 = iStack_28;
    iStack_44 = iStack_24;
    bVar1 = true;
    iVar2 = local_30;
    if (param_2 == 0x20) {
      iVar2 = param_5;
    }
    if (param_2 == 0x20 && iVar2 == 0x20) {
      if (((byte)DAT_01d53480 & 1) == 0) {
        FUN_01bcba4c(param_1,&local_60,param_4);
      }
      else {
        FUN_01bd5e30(param_1,&local_60,param_4);
      }
      FUN_01bed93e(&local_40,0,0x20);
      iVar2 = FUN_01bd5550(param_1,&local_40,0x20);
      bVar1 = iVar2 == 0;
    }
  }
  return bVar1;
}

