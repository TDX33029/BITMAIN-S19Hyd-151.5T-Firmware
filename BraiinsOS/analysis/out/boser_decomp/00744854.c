// FUN_00744854 @ 00744854 size=272 calls_out=2 calls_in=2
// strings: 

void FUN_00744854(undefined4 *param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = (uint *)thunk_FUN_01be5118(0xac);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xac);
  }
  *(undefined1 *)(puVar2 + 3) = 0;
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *(undefined1 *)(puVar2 + 0xf) = 0;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  *(undefined1 *)(puVar2 + 0x17) = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  *(undefined1 *)(puVar2 + 0x1b) = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  *(undefined1 *)(puVar2 + 0x1f) = 0;
  puVar2[0x20] = 0;
  puVar2[0x21] = 0;
  puVar2[0x22] = 0;
  *(undefined1 *)(puVar2 + 0x23) = 0;
  puVar2[0x24] = 0;
  puVar2[0x25] = 0;
  puVar2[0x26] = 0;
  puVar2[0x27] = (uint)(param_2 != 0);
  puVar2[0x28] = 0;
  puVar2[0x29] = 1;
  puVar2[0x2a] = 1;
  do {
    uVar3 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar3 + 1;
  uVar4 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar4 = 0;
    *param_1 = puVar2;
  }
  if ((int)uVar3 < 0) {
    software_udf(0xfdee,0x744954);
    return;
  }
  param_1[1] = puVar2;
  param_1[2] = uVar4;
  return;
}

