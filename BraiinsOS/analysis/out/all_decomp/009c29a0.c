// FUN_009c29a0 @ 009c29a0 size=224 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_009c29a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piVar3 = (int *)FUN_009c2810(param_2,param_3,param_4,param_5);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x9c2a80);
    (*pcVar1)();
  }
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *puVar5 = piVar3;
  FUN_012c72ac(&local_30,param_1,puVar5,&DAT_0186a168);
  if (local_30 != 5) {
    uStack_14 = uStack_24;
    iStack_20 = local_30;
    uStack_1c = uStack_2c;
    uStack_18 = uStack_28;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0034e044,0x24,&iStack_20,&DAT_0186a208);
  }
  return piVar3;
}

