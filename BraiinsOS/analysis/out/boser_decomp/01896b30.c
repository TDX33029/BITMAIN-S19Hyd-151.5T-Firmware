// FUN_01896b30 @ 01896b30 size=276 calls_out=3 calls_in=1
// strings: 

void FUN_01896b30(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
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
  
  uVar3 = param_2[3];
  uVar2 = param_3[2];
  uVar1 = uVar2 + uVar3 * 4;
  if ((uVar1 < uVar2) || ((uint)param_3[1] < uVar1)) {
    *param_1 = 1;
  }
  else {
    iVar4 = *param_3;
    param_3[2] = uVar1;
    if (0xc < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar3,0xc,&DAT_01d2193c);
    }
    FUN_01bed93e(&local_58,0,0x30);
    iVar4 = FUN_01896114(iVar4 + uVar2,uVar3 << 2,1,param_2 + 4,uVar3,&local_58,uVar3);
    if (iVar4 == 0) {
      local_88 = local_58;
      uStack_84 = uStack_54;
      uStack_80 = uStack_50;
      uStack_7c = uStack_4c;
      uStack_78 = uStack_48;
      uStack_74 = uStack_44;
      local_70 = local_40;
      uStack_6c = uStack_3c;
      uStack_68 = uStack_38;
      uStack_64 = uStack_34;
      uStack_60 = uStack_30;
      uStack_5c = uStack_2c;
      FUN_01bed93e(&local_58,0,0x30);
      (*(code *)*param_2)(&local_58,&local_88,param_2 + 0x10);
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
    }
    else {
      *param_1 = 1;
    }
  }
  return;
}

