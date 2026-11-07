// FUN_0157845c @ 0157845c size=340 calls_out=12 calls_in=2
// strings: 

undefined4 FUN_0157845c(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  int local_38 [9];
  int local_14;
  
  uVar2 = FUN_01832864(0x301);
  if (0x7ffffff0 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,local_38,&DAT_018a925c,&DAT_018a927c);
  }
  local_38[0] = 0;
  iVar3 = FUN_016d51b0(local_38,0x10,uVar2);
  if ((iVar3 != 0) || (local_38[0] == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x10,uVar2);
  }
  uVar4 = FUN_0183295c(local_38[0],0x301);
  uVar7 = thunk_FUN_016de0ee(uVar4,0x220);
  puVar5 = (undefined4 *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  if ((*(char *)(puVar5 + 1) != '\x01') &&
     (puVar5 = (undefined4 *)FUN_0133d870(), puVar5 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_015f853c(&DAT_018ae900);
  }
  puVar6 = (uint *)*puVar5;
  uVar2 = *puVar6;
  *puVar6 = uVar2 + 1;
  if (0xfffffffe < uVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1578588);
    (*pcVar1)();
  }
  local_38[7] = 0;
  local_38[6] = 0;
  local_38[5] = 0;
  local_38[4] = 0;
  local_38[3] = 0;
  local_38[2] = 0;
  local_38[1] = 0;
  local_38[0] = 0;
  FUN_0133ee00(puVar6,local_38);
  local_14 = FUN_01832bd8(uVar4,local_38);
  if (local_14 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_015f3600(&local_14,&DAT_00568c80,0,&DAT_018a926c);
  }
  uVar2 = *puVar6;
  *puVar6 = uVar2 - 1;
  if (uVar2 - 1 == 0) {
    FUN_0133db64(puVar6);
  }
  return uVar4;
}

