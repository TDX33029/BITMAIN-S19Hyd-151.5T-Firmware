// FUN_01b7c728 @ 01b7c728 size=352 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_01b7c728(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint local_44;
  undefined4 local_40;
  int local_38;
  int iStack_34;
  undefined1 auStack_30 [12];
  uint local_24;
  
  local_24 = DAT_01d53560;
  iVar1 = FUN_01b7c604(10,param_2,&PTR_01d3b2b0,0);
  local_40 = 0xd;
  if (iVar1 == 0) {
    local_40 = 0xc;
    uVar3 = 0;
  }
  else {
    for (local_44 = 0; local_44 < 10; local_44 = local_44 + 1) {
      piVar4 = (int *)(iVar1 + local_44 * 8);
      *piVar4 = local_44 * 3;
      piVar4[1] = (uint)CARRY4(local_44,local_44) + (uint)CARRY4(local_44 * 2,local_44);
    }
    iVar2 = FUN_01b7c304(iVar1,10,&local_38,auStack_30);
    if ((iVar2 == 0) && (local_38 == 3 && iStack_34 == 0)) {
      local_40 = 0;
    }
    uVar3 = FUN_01b7c660(iVar1,10);
  }
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar3,local_24 ^ DAT_01d53560,0);
  }
  return local_40;
}

