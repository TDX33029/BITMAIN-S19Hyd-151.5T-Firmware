// FUN_0178fb88 @ 0178fb88 size=320 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_0178fb88(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  
  puVar3 = (undefined4 *)*param_1;
  iVar5 = param_2;
  iVar6 = param_3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)thunk_FUN_01be5118(0x10);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    *puVar3 = &DAT_0056d238;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    FUN_0178e884(0);
    *param_1 = puVar3;
  }
  local_28 = param_2;
  local_24 = param_3;
  piVar1 = (int *)thunk_FUN_01be5118(8);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *piVar1 = param_2;
  piVar1[1] = param_3;
  uVar4 = FUN_01412188(puVar3,&DAT_00567f78,piVar1,&DAT_01d1b748,iVar5,iVar6);
  iVar5 = (int)((ulonglong)uVar4 >> 0x20);
  puVar3 = (undefined4 *)uVar4;
  uVar2 = 2;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)(iVar5 + 0xc))(&local_28,puVar3);
    param_3 = 0x62c0f607;
    if ((local_28 == -0x4bf27ed1 && iStack_20 == -0x70dc602a) &&
        (local_24 == 0x62c0f607 && iStack_1c == 0x50a65e0e)) {
      uVar2 = *puVar3;
      param_3 = puVar3[1];
      thunk_FUN_01be4678(puVar3);
    }
    else {
      FUN_01443048(puVar3,iVar5);
    }
  }
  return CONCAT44(param_3,uVar2);
}

