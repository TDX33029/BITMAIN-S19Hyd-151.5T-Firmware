// FUN_00fb2224 @ 00fb2224 size=300 calls_out=6 calls_in=5
// strings: alloc::sync::Arc<std::sync::once_lock::OnceLock<api_logging::record::RequestParamete

void FUN_00fb2224(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 auStack_2c [12];
  char *local_20;
  undefined4 local_1c;
  char **local_18;
  undefined2 *local_14;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x98)) {
  case 0:
    *(undefined1 *)(param_2 + 0x94) = 0;
    *(int *)(param_2 + 0x8c) = param_2;
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_2 + 0x88);
    iVar3 = param_2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c20c20);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c20c20);
  case 3:
    if (*(char *)(param_2 + 0x94) != '\0') {
      if (*(char *)(param_2 + 0x94) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20c10);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20c10);
    }
    iVar3 = *(int *)(param_2 + 0x8c);
  }
  puVar4 = (undefined4 *)FUN_00a52660(*(undefined4 *)(iVar3 + 0x80));
  if (puVar4 == (undefined4 *)0x0) {
    local_14 = &DAT_0132b6a0;
    local_18 = &local_20;
    local_1c = 0x58;
    local_20 = 
    "alloc::sync::Arc<std::sync::once_lock::OnceLock<api_logging::record::RequestParamete";
    FUN_00664898(auStack_2c,&DAT_00572ff4,&local_18);
    uVar5 = FUN_00b33ea0(auStack_2c);
    puVar6 = (uint *)&DAT_01c100ac;
  }
  else {
    puVar6 = (uint *)*puVar4;
    do {
      uVar7 = *puVar6;
      bVar2 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar2);
    *puVar6 = uVar7 + 1;
    uVar5 = 0;
    if (0x7fffffff < uVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xfb22b0);
      (*pcVar1)();
    }
  }
  param_1[1] = uVar5;
  param_1[2] = puVar6;
  *param_1 = 0;
  *(undefined1 *)(param_2 + 0x94) = 1;
  FUN_01839f10(param_2);
  *(undefined1 *)(param_2 + 0x98) = 1;
  return;
}

