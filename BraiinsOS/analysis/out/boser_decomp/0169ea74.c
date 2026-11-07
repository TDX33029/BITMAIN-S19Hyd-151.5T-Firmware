// FUN_0169ea74 @ 0169ea74 size=508 calls_out=7 calls_in=4
// strings: 

void FUN_0169ea74(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((*(int *)(param_1 + 0xac4) != 3) &&
     ((*param_3 - 1U < 2 ||
      (*(int *)(*(int *)(param_1 + 0xae8) + 0x128) == *(int *)(*(int *)(param_1 + 0xae8) + 300)))))
  {
    if (*(int *)(param_2 + 600) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d080e4);
    }
    FUN_0169ecb8(&local_30,(int *)(param_1 + 0xac4),(int *)(param_2 + 600),param_3,param_4,param_5);
    if (local_30 == 2) {
      local_28 = local_2c;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01d08184,&DAT_01d080f4);
    }
    return;
  }
  uVar1 = *(uint *)(param_1 + 0xaa8);
  if ((uVar1 != 2) && (((char)param_3[6] != '\x01' || ((uint)param_3[3] < 0x81)))) {
    if (*(int *)(*(int *)(param_1 + 0xac0) + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012ffdf4(&DAT_01d07d2c);
    }
    uVar3 = *(uint *)(param_1 + 0xaac);
    if ((uVar1 & 1) == 0) {
      uVar3 = 0x40000;
    }
    uVar4 = param_3[4];
    uVar5 = param_3[5];
    uVar1 = (uVar3 & 0x1fffffff) >> 2;
    if ((uVar3 & 3) != 0) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = uVar1 << 5;
    if (0x7ffffff < uVar1) {
      iVar2 = -1;
    }
    iVar2 = FUN_01bf1250(iVar2);
    uVar1 = iVar2 - 1;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    uVar3 = uVar5 - uVar4;
    if (uVar5 < uVar4) {
      uVar3 = 0;
    }
    if (uVar3 <= uVar1) {
      if (*(int *)(param_2 + 0x2d4) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d08114);
      }
      FUN_0169ee78(&local_30,(uint *)(param_1 + 0xaa8),(int *)(param_2 + 0x2d4),param_3,param_4,
                   param_5);
      if (local_30 == 2) {
        local_28 = local_2c;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01d08184,&DAT_01d08124);
      }
      return;
    }
  }
  if (*(int *)(param_2 + 0x268) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d080b4);
  }
  FUN_0169f04c(param_1 + 0xa90,(int *)(param_2 + 0x268),param_3,param_4);
  return;
}

