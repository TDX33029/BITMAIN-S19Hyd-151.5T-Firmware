// FUN_015780d8 @ 015780d8 size=360 calls_out=13 calls_in=0
// strings: 

void FUN_015780d8(undefined4 *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  
  pcVar4 = (char *)*param_1;
  cVar2 = *pcVar4;
  *pcVar4 = '\0';
  if (cVar2 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac42c);
  }
  uVar9 = thunk_FUN_016de0ee(pcVar4,0x220);
  puVar7 = (undefined4 *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
  uVar5 = FUN_0157845c();
  if ((*(char *)(puVar7 + 1) != '\x01') &&
     (puVar7 = (undefined4 *)FUN_0133d870(puVar7), puVar7 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_015f853c(&DAT_018ae900);
  }
  puVar8 = (uint *)*puVar7;
  uVar6 = *puVar8;
  *puVar8 = uVar6 + 1;
  if (0xfffffffe < uVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1578244);
    (*pcVar1)();
  }
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  FUN_0133ee00(puVar8,&local_40);
  local_1c = FUN_01832bd8(uVar5,&local_40);
  if (local_1c != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_015f3600(&local_1c,&DAT_00568c80,0,&DAT_018a926c);
  }
  uVar6 = *puVar8;
  *puVar8 = uVar6 - 1;
  if (uVar6 - 1 == 0) {
    FUN_0133db64(puVar8);
  }
  iVar3 = DAT_018dd958;
  if (DAT_018dd958 != 0) {
    uVar6 = FUN_018328e4(DAT_018dd958);
    FUN_01832a0c(iVar3);
    if (0x7ffffff0 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_018a921c,&DAT_018a922c);
    }
    thunk_FUN_016d3fb4(iVar3);
  }
  DAT_018dd958 = uVar5;
  return;
}

