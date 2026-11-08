// FUN_009f73dc @ 009f73dc size=428 calls_out=7 calls_in=0
// strings: 

undefined4 FUN_009f73dc(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int local_60 [2];
  int local_58;
  undefined1 local_54;
  int local_50 [2];
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *local_28;
  code *local_24;
  
  uVar9 = thunk_FUN_016de0ee(param_1,0x298);
  iVar3 = (int)((ulonglong)uVar9 >> 0x20);
  iVar4 = param_1 + 0xc;
  *(int *)((int)uVar9 + iVar3) = *(int *)((int)uVar9 + iVar3) + 1;
  local_54 = 0;
  local_60[0] = param_3;
  local_58 = iVar4;
  local_50[0] = param_3;
  FUN_016a4f80(&local_38,iVar4,param_3 + -1);
  if (local_38 == 0) {
    if (((DAT_018dd988 & 0x7fffffff) == 0) || (iVar3 = FUN_015bf3f8(), iVar3 != 0)) {
      local_28 = local_50;
      local_24 = FUN_016a16e4;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0057f853,&local_28,&DAT_018ae488);
    }
  }
  else {
    local_48 = local_38;
    uStack_44 = uStack_34;
    uStack_40 = uStack_30;
    puVar2 = (uint *)(local_38 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar5 - 1;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      if (uVar5 == 0xffffffff) {
LAB_009f7574:
                    /* WARNING: Subroutine does not return */
        FUN_015be724(&DAT_00414d9a,0x19,&DAT_018ae498);
      }
    }
    else {
      iVar3 = FUN_015bf3f8();
      if ((uVar5 == 0xffffffff) && (iVar3 != 0)) goto LAB_009f7574;
    }
    if (uVar5 < 2) {
      DataMemoryBarrier(0xb);
      FUN_016a50fc(&local_48);
      uVar8 = 1;
      puVar7 = *(undefined4 **)(param_1 + 4);
      local_54 = 1;
      if (*(int *)(param_1 + 8) != 0) {
        puVar6 = puVar7 + *(int *)(param_1 + 8) * 2;
        do {
          (**(code **)(puVar7[1] + 0x3c))
                    (*puVar7,*(code **)(puVar7[1] + 0x3c),param_3,param_4,0,0,iVar4);
          puVar7 = puVar7 + 2;
        } while (puVar7 != puVar6);
      }
      goto LAB_009f74f8;
    }
    FUN_016a50fc(&local_48);
  }
  uVar8 = 0;
LAB_009f74f8:
  FUN_016a183c(local_60);
  return uVar8;
}

