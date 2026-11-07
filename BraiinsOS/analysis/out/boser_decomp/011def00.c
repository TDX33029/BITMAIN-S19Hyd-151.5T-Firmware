// FUN_011def00 @ 011def00 size=332 calls_out=8 calls_in=2
// strings: size overflows MAX_SIZE

void FUN_011def00(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int local_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 local_1f;
  undefined1 local_1d;
  
  if (*(char *)((int)param_1 + 0x1a) == '\x02') {
    if (*(uint *)(*param_1 + 0x28) <= (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(param_1[2],*(uint *)(*param_1 + 0x28),&DAT_01cf45e0);
    }
  }
  else {
    local_68 = *param_1;
    iStack_64 = param_1[1];
    iStack_60 = param_1[2];
    local_5c = param_1[3];
    iStack_58 = param_1[4];
    iStack_54 = param_1[5];
    iStack_50 = param_1[6];
    uVar4 = thunk_FUN_01bee35a(param_1 + 3,0x120);
    piVar3 = (int *)((int)uVar4 + (int)((ulonglong)uVar4 >> 0x20));
    if (((char)piVar3[0x14] != '\x01') &&
       (piVar3 = (int *)FUN_01429058(piVar3,0), piVar3 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_019b0950(&DAT_01d301c0);
    }
    if (*piVar3 != 0) {
      FUN_01306fc8(&DAT_01cf471c);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x11df04c);
      (*pcVar1)();
    }
    *piVar3 = -1;
    FUN_01420e30(piVar3 + 2);
    (**(code **)piVar3[6])(&local_30,piVar3 + 9,piVar3[7],piVar3[8]);
    local_38 = (undefined1)piVar3[10];
    *piVar3 = *piVar3 + 1;
    local_48 = local_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    uStack_3c = uStack_24;
    local_35 = local_1d;
    local_37 = local_1f;
    iVar2 = FUN_0141c1f0(param_1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("size overflows MAX_SIZE",0x17,&local_68,&DAT_01d2f38c,&DAT_01d1e3d4);
    }
  }
  return;
}

