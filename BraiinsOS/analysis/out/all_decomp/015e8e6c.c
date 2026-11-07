// FUN_015e8e6c @ 015e8e6c size=208 calls_out=6 calls_in=302
// strings: fatal runtime error: the System allocator may not use TLS with destructors; aborting 

/* WARNING: Removing unreachable block (ram,0x015e8e90) */

undefined8 FUN_015e8e6c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined1 uStack_21;
  
  uVar5 = thunk_FUN_016de0ee(0,0x28);
  piVar4 = (int *)((int)uVar5 + (int)((ulonglong)uVar5 >> 0x20));
  if (*piVar4 != 0) {
    FUN_015bee18(local_2c,&uStack_21,
                 "fatal runtime error: the System allocator may not use TLS with destructors, aborting\n"
                 ,0xab);
    FUN_015ff474(local_2c[0],local_28);
                    /* WARNING: Subroutine does not return */
    FUN_015bef44();
  }
  *piVar4 = -1;
  FUN_015e8f5c();
  iVar3 = piVar4[3];
  if (iVar3 == piVar4[1]) {
    FUN_015e90b0(piVar4 + 1);
  }
  puVar1 = (undefined4 *)(piVar4[2] + iVar3 * 8);
  *puVar1 = param_1;
  piVar4[3] = iVar3 + 1;
  puVar1[1] = param_2;
  iVar2 = *piVar4;
  *piVar4 = iVar2 + 1;
  return CONCAT44(iVar3 + 1,iVar2 + 1);
}

