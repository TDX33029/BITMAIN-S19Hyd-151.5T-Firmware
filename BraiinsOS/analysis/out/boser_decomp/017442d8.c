// FUN_017442d8 @ 017442d8 size=236 calls_out=5 calls_in=1
// strings: 

void FUN_017442d8(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_1c;
  
  local_a0 = FUN_009dcc6c(0);
  local_3c = 1;
  local_bc = 1;
  local_c0 = 1;
  local_9c = 0;
  local_44 = 0;
  local_48 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_38 = 0;
  local_40 = 0;
  local_78 = 0;
  local_80 = 0;
  local_1c = (int *)0x0;
  local_50 = local_a0;
  local_4c = local_a0;
  iVar4 = FUN_01be5878(&local_1c,0x20,0xa0);
  piVar3 = local_1c;
  if ((iVar4 != 0) || (local_1c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x20,0xa0);
  }
  FUN_01bed4e2(local_1c,&local_c0,0xa0);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x17443c0);
    (*pcVar1)();
  }
  uVar5 = FUN_01ae6398();
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (int)uVar5;
  param_1[1] = piVar3;
  param_1[3] = piVar3;
  param_1[4] = (int)((ulonglong)uVar5 >> 0x20);
  return;
}

