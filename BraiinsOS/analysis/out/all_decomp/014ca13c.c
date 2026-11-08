// FUN_014ca13c @ 014ca13c size=332 calls_out=3 calls_in=3
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_014ca13c(undefined2 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  byte bVar3;
  uint local_a0;
  int local_9c;
  undefined2 local_28;
  
  bVar3 = *(byte *)(param_2 + 0x2e0);
  if (bVar3 < 2) {
    if (*(char *)(param_2 + 0x265) == '\0') {
      *(undefined2 *)(param_2 + 0x265) = 0x101;
      local_9c = 0;
      local_a0 = 0x80000001;
      local_28 = 4;
      FUN_01525ed4(param_2 + 0x10,&local_a0,*(char *)(param_2 + 0x41) == '\x02');
      bVar3 = *(byte *)(param_2 + 0x2e0);
    }
    *(byte *)(param_2 + 0x2e0) = bVar3 | 2;
  }
  if (*(int *)(param_2 + 0x218) != 0) {
    do {
      FUN_014bd878(&local_a0,param_2,param_2 + 0x10,param_3);
      if ((local_a0 & 0xff) == 5) goto switchD_014ca254_default;
      if ((local_a0 & 0xff) != 4) {
        uVar2 = *(undefined2 *)((uint)&local_a0 | 1);
        *(int *)(param_1 + 2) = local_9c;
        uVar1 = *(undefined1 *)((undefined2 *)((uint)&local_a0 | 1) + 1);
        *(undefined1 *)param_1 = (undefined1)local_a0;
        *(undefined1 *)((int)param_1 + 3) = uVar1;
        *(undefined2 *)((int)param_1 + 1) = uVar2;
        return;
      }
      if (local_9c == 0) {
        *param_1 = 0x1701;
        return;
      }
    } while (*(int *)(param_2 + 0x218) != 0);
  }
  FUN_01642d70(&local_a0,*(undefined4 *)(param_2 + 0xc));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(local_a0 & 0xff) {
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
switchD_014ca254_default:
  *(undefined1 *)param_1 = 5;
  return;
}

