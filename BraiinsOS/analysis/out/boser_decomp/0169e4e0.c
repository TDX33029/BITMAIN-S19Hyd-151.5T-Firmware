// FUN_0169e4e0 @ 0169e4e0 size=696 calls_out=8 calls_in=12
// strings: invalid match span

void FUN_0169e4e0(uint *param_1,int param_2,ulonglong *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  iVar1 = *(int *)(param_2 + 0xac4);
  *(undefined4 *)param_3 = 0;
  if ((iVar1 == 3) ||
     ((1 < *param_4 - 1U &&
      (*(int *)(*(int *)(param_2 + 0xae8) + 0x128) != *(int *)(*(int *)(param_2 + 0xae8) + 300)))))
  {
    uVar2 = *(uint *)(param_2 + 0xaa8);
    if ((uVar2 != 2) && (((char)param_4[6] != '\x01' || ((uint)param_4[3] < 0x81)))) {
      if (*(int *)(*(int *)(param_2 + 0xac0) + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012ffdf4(&DAT_01d07d2c);
      }
      uVar4 = *(uint *)(param_2 + 0xaac);
      if ((uVar2 & 1) == 0) {
        uVar4 = 0x40000;
      }
      uVar5 = param_4[4];
      uVar6 = param_4[5];
      uVar2 = (uVar4 & 0x1fffffff) >> 2;
      if ((uVar4 & 3) != 0) {
        uVar2 = uVar2 + 1;
      }
      iVar1 = uVar2 << 5;
      if (0x7ffffff < uVar2) {
        iVar1 = -1;
      }
      iVar1 = FUN_01bf1250(iVar1);
      uVar2 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      uVar4 = uVar6 - uVar5;
      if (uVar6 < uVar5) {
        uVar4 = 0;
      }
      if (uVar4 <= uVar2) {
        if (*(int *)((int)param_3 + 0x2d4) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d08114);
        }
        FUN_0169ee78(&local_2c,(uint *)(param_2 + 0xaa8),(int *)((int)param_3 + 0x2d4),param_4,
                     *(undefined4 *)((int)param_3 + 0xc),(int)param_3[2]);
        if (local_2c == 2) {
          local_24 = local_28;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_24,&DAT_01d08184,&DAT_01d08124);
        }
        goto LAB_0169e614;
      }
    }
    if ((int)param_3[0x4d] == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d080b4);
    }
    uVar7 = FUN_0169f04c(param_2 + 0xa90,param_3 + 0x4d,param_4,*(undefined4 *)((int)param_3 + 0xc),
                         (int)param_3[2]);
  }
  else {
    if ((int)param_3[0x4b] == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d080e4);
    }
    FUN_0169ecb8(&local_2c,(int *)(param_2 + 0xac4),param_3 + 0x4b,param_4,
                 *(undefined4 *)((int)param_3 + 0xc),(int)param_3[2]);
    if (local_2c == 2) {
      local_24 = local_28;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_24,&DAT_01d08184,&DAT_01d080f4);
    }
LAB_0169e614:
    uVar7 = CONCAT44(local_28,local_2c);
  }
  uVar4 = (uint)(uVar7 >> 0x20);
  uVar2 = 0;
  *param_3 = uVar7;
  if ((uVar7 & 1) != 0) {
    uVar6 = *(uint *)(*(int *)((int)param_3 + 0x14) + 0x10);
    uVar5 = 1;
    if (uVar6 != 1) {
      if (uVar6 <= uVar4) goto LAB_0169e6a8;
      uVar5 = uVar4 << 1 | 1;
      uVar2 = uVar4 << 1;
    }
    if (uVar2 < (uint)param_3[2]) {
      iVar1 = *(int *)(*(int *)((int)param_3 + 0xc) + uVar2 * 4);
      if ((iVar1 != 0) && (uVar5 < (uint)param_3[2])) {
        iVar3 = *(int *)(*(int *)((int)param_3 + 0xc) + uVar5 * 4);
        uVar2 = 0;
        if (iVar3 != 0) {
          uVar5 = iVar3 - 1;
          uVar2 = iVar1 - 1;
          if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
          }
          param_1[1] = uVar2;
          uVar2 = 1;
          param_1[2] = uVar5;
          param_1[3] = uVar4;
        }
        goto LAB_0169e6a8;
      }
    }
    uVar2 = 0;
  }
LAB_0169e6a8:
  *param_1 = uVar2;
  return;
}

