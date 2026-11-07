// FUN_01890754 @ 01890754 size=232 calls_out=5 calls_in=2
// strings: 

void FUN_01890754(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar3 = *(uint *)(*param_3 + 0x48);
  if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar3,0x40,&DAT_01d2571c);
  }
  uVar2 = *(uint *)(param_2 + 0xc);
  FUN_01bed93e(&local_48,0,0x30);
  if (0xc < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0xc,&DAT_01d2195c);
  }
  if (uVar2 << 2 <= uVar3) {
    uVar3 = uVar2 << 2;
  }
  iVar1 = FUN_01895ca0(param_3 + 1,uVar3,&local_48,uVar2);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_48,&DAT_01d2134c,&DAT_01d2139c);
  }
  FUN_01bd50d4(&local_48,param_2 + 0x70,uVar2);
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  param_1[4] = uStack_38;
  param_1[5] = uStack_34;
  param_1[6] = local_30;
  param_1[7] = uStack_2c;
  param_1[8] = uStack_28;
  param_1[9] = uStack_24;
  param_1[10] = uStack_20;
  param_1[0xb] = uStack_1c;
  return;
}

