// FUN_013e4248 @ 013e4248 size=272 calls_out=4 calls_in=2
// strings: 

void FUN_013e4248(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  byte local_24 [12];
  
  uVar3 = FUN_013e678c(param_2);
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  if (iVar2 == 0) {
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x34);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x34);
    }
    *puVar1 = 1;
    puVar1[1] = 0;
    puVar1[2] = 1;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined1 *)((int)puVar1 + 0x32) = 0;
    *(undefined2 *)(puVar1 + 0xc) = 1;
    *param_1 = 0;
    param_1[6] = puVar1;
    return;
  }
  FUN_00fab1e0(local_24,(int)uVar3,iVar2);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x34);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x34);
  }
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined2 *)((int)puVar1 + 0x31) = 0x101;
  *puVar1 = 1;
  puVar1[1] = iVar2;
  puVar1[2] = 1;
  puVar1[3] = iVar2;
  puVar1[4] = 1;
  *(byte *)(puVar1 + 0xc) = local_24[0] ^ 1;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 1) = uVar3;
  param_1[6] = puVar1;
  return;
}

