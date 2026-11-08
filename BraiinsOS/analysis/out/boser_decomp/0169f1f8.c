// FUN_0169f1f8 @ 0169f1f8 size=568 calls_out=7 calls_in=4
// strings: 

bool FUN_0169f1f8(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  undefined1 local_28;
  
  if ((*(int *)(param_1 + 0xac4) == 3) ||
     ((1 < *param_3 - 1U &&
      (*(int *)(*(int *)(param_1 + 0xae8) + 0x128) != *(int *)(*(int *)(param_1 + 0xae8) + 300)))))
  {
    uVar1 = *(uint *)(param_1 + 0xaa8);
    if ((uVar1 != 2) && ((uVar4 = param_3[3], (char)param_3[6] != '\x01' || (uVar4 < 0x81)))) {
      if (*(int *)(*(int *)(param_1 + 0xac0) + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012ffdf4(&DAT_01d07d2c);
      }
      uVar3 = *(uint *)(param_1 + 0xaac);
      if ((uVar1 & 1) == 0) {
        uVar3 = 0x40000;
      }
      uVar5 = param_3[4];
      uVar6 = param_3[5];
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
      uVar3 = uVar6 - uVar5;
      if (uVar6 < uVar5) {
        uVar3 = 0;
      }
      if (uVar3 <= uVar1) {
        if (*(int *)(param_2 + 0x2d4) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d08134);
        }
        local_40 = *param_3;
        local_3c = param_3[1];
        iStack_38 = param_3[2];
        local_28 = 1;
        uStack_34 = uVar4;
        uStack_30 = uVar5;
        local_2c = uVar6;
        FUN_0169ee78(&local_48,(uint *)(param_1 + 0xaa8),(int *)(param_2 + 0x2d4),&local_40,4,0);
        if (local_48 == 2) {
          local_40 = local_44;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01d08184,&DAT_01d08144);
        }
        goto LAB_0169f33c;
      }
    }
    if (*(int *)(param_2 + 0x268) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d080d4);
    }
    local_40 = *param_3;
    local_3c = param_3[1];
    iStack_38 = param_3[2];
    uStack_34 = param_3[3];
    uStack_30 = param_3[4];
    local_2c = param_3[5];
    local_28 = 1;
    local_48 = FUN_0169f04c(param_1 + 0xa90,(int *)(param_2 + 0x268),&local_40,4,0);
  }
  else {
    if (*(int *)(param_2 + 600) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d080e4);
    }
    FUN_0169ecb8(&local_40,(int *)(param_1 + 0xac4),(int *)(param_2 + 600),param_3,4,0);
    local_48 = local_40;
    if (local_40 == 2) {
      local_48 = local_3c;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_48,&DAT_01d08184,&DAT_01d080f4);
    }
  }
LAB_0169f33c:
  return local_48 != 0;
}

