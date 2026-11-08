// FUN_019a2bcc @ 019a2bcc size=208 calls_out=6 calls_in=112
// strings: fatal runtime error: the System allocator may not use TLS with destructors; aborting 

/* WARNING: Removing unreachable block (ram,0x019a2bf0) */

undefined8 FUN_019a2bcc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 auStack_2c [11];
  undefined1 uStack_21;
  
  uVar5 = thunk_FUN_01bee35a(0,8);
  piVar4 = (int *)((int)uVar5 + (int)((ulonglong)uVar5 >> 0x20));
  if (*piVar4 != 0) {
    FUN_0197a828(auStack_2c,&uStack_21,
                 "fatal runtime error: the System allocator may not use TLS with destructors, aborting\n"
                 ,0xab);
    FUN_019b6d48(auStack_2c);
                    /* WARNING: Subroutine does not return */
    FUN_0197a954();
  }
  *piVar4 = -1;
  FUN_019a2cbc();
  iVar3 = piVar4[3];
  if (iVar3 == piVar4[1]) {
    FUN_019a2df4(piVar4 + 1);
  }
  puVar1 = (undefined4 *)(piVar4[2] + iVar3 * 8);
  *puVar1 = param_1;
  piVar4[3] = iVar3 + 1;
  puVar1[1] = param_2;
  iVar2 = *piVar4;
  *piVar4 = iVar2 + 1;
  return CONCAT44(iVar3 + 1,iVar2 + 1);
}

