// FUN_01407b7c @ 01407b7c size=440 calls_out=8 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01407b7c(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  if (param_3 < (uint)param_2[1]) {
    iVar9 = *param_2;
    uVar2 = FUN_013f0d78();
    local_4c = uVar2;
    puVar3 = (undefined4 *)FUN_0140b398();
    puVar10 = puVar3;
    while( true ) {
      puVar8 = (uint *)*puVar10;
      local_34 = 0;
      local_38 = 4;
      local_3c = 0;
      if (puVar10[1] == 0) break;
      iVar11 = puVar10[1] << 2;
      do {
        uVar4 = *puVar8;
        if ((uVar4 & 1) != 0) {
          FUN_0072151c(&local_3c);
          goto LAB_01407ca4;
        }
        uVar7 = uVar4 & 0xfffffff8;
        if ((uVar7 != 0) && ((uVar4 & 2) == 0)) {
          FUN_006666fc(&local_30,*(undefined4 *)(uVar7 + 0x24),*(undefined4 *)(uVar7 + 0x28));
          iVar1 = local_34;
          if (local_34 == local_3c) {
            FUN_019abd3c(&local_3c);
          }
          piVar5 = (int *)(local_38 + iVar1 * 0xc);
          *piVar5 = local_30;
          piVar5[1] = iStack_2c;
          piVar5[2] = iStack_28;
          local_34 = iVar1 + 1;
        }
        puVar8 = puVar8 + 1;
        iVar11 = iVar11 + -4;
      } while (iVar11 != 0);
      local_48 = local_38;
      local_44 = local_34;
      if (local_3c != -0x80000000) break;
LAB_01407ca4:
      puVar6 = (undefined4 *)
               FUN_013f608c(puVar10,&local_4c,param_2[2],param_2[3],param_2[4],param_2[5],0);
      if (puVar6 != (undefined4 *)0x0) {
        puVar10 = puVar6;
      }
    }
    iStack_2c = local_38;
    iStack_28 = local_34;
    local_48 = local_38;
    local_44 = local_34;
    local_30 = local_3c;
    FUN_0140b280(iVar9 + param_3 * 8,uVar2,puVar3,puVar10);
    *param_1 = local_30;
    param_1[1] = iStack_2c;
    param_1[2] = iStack_28;
    FUN_013f0f2c(uVar2);
  }
  else {
    *param_1 = -0x80000000;
  }
  return;
}

