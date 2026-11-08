// FUN_00ac06bc @ 00ac06bc size=120 calls_out=3 calls_in=1
// strings: 

int FUN_00ac06bc(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined **local_450 [8];
  undefined1 auStack_430 [1048];
  
  puVar3 = (undefined4 *)((uint)local_450 | 4);
  local_450[0] = &PTR_FUN_0186ec44;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  *puVar3 = *param_2;
  puVar3[1] = uVar2;
  puVar3[2] = uVar4;
  puVar3[3] = uVar5;
  puVar3[4] = uVar6;
  puVar3[5] = uVar7;
  FUN_016dd1aa(auStack_430,param_1,0x418);
  iVar1 = thunk_FUN_016d4a50(0x438);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x438);
  }
  FUN_016dd1aa(iVar1,local_450,0x438);
  return iVar1;
}

