// FUN_00abac74 @ 00abac74 size=456 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00abac74(uint *param_1,int *param_2,undefined2 param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int *local_30;
  undefined1 *local_2c;
  undefined1 uStack_25;
  
  local_44 = *param_2;
  iVar4 = param_2[1];
  if (local_44 == iVar4) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    iVar5 = local_44 + 8;
    *param_2 = iVar5;
    if (iVar4 == iVar5) {
      local_3c = 1;
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)(iVar4 - iVar5) >> 2;
      local_3c = FUN_01298504(uVar3,1);
      if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar3);
      }
    }
    local_30 = &local_44;
    local_38 = 0;
    local_2c = &LAB_01963050;
    local_40 = uVar3;
    iVar1 = FUN_012fa178(&local_40,&DAT_01d2c43c,&DAT_00590e5f,&local_30);
    if (iVar1 != 0) {
      puVar2 = &DAT_01c1d470;
LAB_00abae10:
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&uStack_25,&DAT_01c0ffb8,puVar2);
    }
    if (iVar4 != iVar5) {
      local_34 = iVar5;
      do {
        iVar5 = local_34 + 8;
        *param_2 = iVar5;
        if (local_40 - local_38 < 2) {
          FUN_0132b898(&local_40,local_38,2,1,1);
        }
        *(undefined2 *)(local_3c + local_38) = param_3;
        local_38 = local_38 + 2;
        local_2c = &LAB_01963050;
        local_30 = &local_34;
        iVar1 = FUN_012fa178(&local_40,&DAT_01d2c43c,&DAT_00590e5f,&local_30);
        if (iVar1 != 0) {
          puVar2 = &DAT_01c1d480;
          goto LAB_00abae10;
        }
        local_34 = iVar5;
      } while (iVar5 != iVar4);
    }
    *param_1 = local_40;
    param_1[1] = local_3c;
    param_1[2] = local_38;
  }
  return;
}

