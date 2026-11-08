// FUN_006f6e24 @ 006f6e24 size=364 calls_out=4 calls_in=1
// strings: 

void FUN_006f6e24(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int local_30;
  int *local_2c;
  code *local_28;
  
  iVar5 = *param_2;
  uVar4 = param_2[1];
  iVar7 = param_2[2];
  piVar8 = &local_30;
  if (((uVar4 < *(uint *)(iVar5 + 0x38)) &&
      (piVar1 = (int *)(*(int *)(iVar5 + 0x34) + uVar4 * 0xf8), *piVar1 != 3 || piVar1[1] != 0)) &&
     (piVar1[0x35] == iVar7)) {
    puVar2 = (undefined1 *)piVar1[6];
    uVar6 = *param_3;
    local_30 = iVar7;
    FUN_006f6928(param_3[1],*(undefined4 *)param_3[3],*(undefined1 *)param_3[4],param_3[5],param_2,
                 param_1,param_3[2],piVar8,puVar2,uVar4);
    FUN_01017864(uVar6,param_2,param_1);
    if (((uVar4 < *(uint *)(iVar5 + 0x38)) &&
        (piVar1 = (int *)(*(int *)(iVar5 + 0x34) + uVar4 * 0xf8), *piVar1 != 3 || piVar1[1] != 0))
       && (piVar1[0x35] == iVar7)) {
      iVar5 = piVar1[0x14];
      piVar1[0x14] = 0;
      local_30 = iVar7;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 4))(piVar1[0x15]);
      }
      FUN_0102e068(param_1,param_2,puVar2 != &DAT_3b9aca00);
      return;
    }
    puVar3 = &DAT_01882560;
  }
  else {
    puVar3 = &DAT_01882550;
  }
  local_28 = FUN_0101a4ac;
  local_30 = iVar7;
  local_2c = piVar8;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00599806,&local_2c,puVar3);
}

