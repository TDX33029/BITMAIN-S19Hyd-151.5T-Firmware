// FUN_01896374 @ 01896374 size=172 calls_out=3 calls_in=6
// strings: 

void FUN_01896374(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar2 = *(uint *)(param_2 + 0xc);
  if (0xc < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0xc,&DAT_01d2194c);
  }
  if (param_4 == uVar2 * 4) {
    FUN_01bed93e(&local_58,0,0x30);
    iVar1 = FUN_01896114(param_3,param_4,0,param_2 + 0x70,uVar2,&local_58,uVar2);
    if (iVar1 == 0) {
      param_1[1] = local_58;
      param_1[2] = uStack_54;
      param_1[3] = uStack_50;
      param_1[4] = uStack_4c;
      param_1[5] = uStack_48;
      param_1[6] = uStack_44;
      param_1[7] = local_40;
      param_1[8] = uStack_3c;
      param_1[9] = uStack_38;
      param_1[10] = uStack_34;
      param_1[0xb] = uStack_30;
      param_1[0xc] = uStack_2c;
      *param_1 = 0;
      return;
    }
  }
  *param_1 = 1;
  return;
}

