// FUN_01b6bfc4 @ 01b6bfc4 size=276 calls_out=6 calls_in=1
// strings: 

void FUN_01b6bfc4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_34 [6];
  uint local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01b7076c(&DAT_01d5330c,param_2,&PTR_01d3b2b0,0);
  if (DAT_01d53304 != 0) {
    local_34[0] = param_1;
    iVar1 = FUN_01b6a1e0(DAT_01d53304,local_34,&LAB_01b6bc94,&LAB_01b6bc74);
    if (iVar1 != 0) {
      FUN_01b707cc(&DAT_01d5330c);
      uVar2 = *(undefined4 *)(iVar1 + 8);
      uVar3 = extraout_r1;
      goto LAB_01b6c04c;
    }
  }
  FUN_01b707cc(&DAT_01d5330c);
  uVar4 = FUN_01becf98(param_1,&DAT_0055f7b8,0x3d4,2,FUN_01b6bd98);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar2 = 0;
  if ((undefined2 *)uVar4 != (undefined2 *)0x0) {
    uVar4 = FUN_01b6bd18(*(undefined2 *)uVar4);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uVar2 = *(undefined4 *)((int)uVar4 + 8);
  }
LAB_01b6c04c:
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,uVar3,local_1c ^ DAT_01d53560,0);
  }
  return;
}

