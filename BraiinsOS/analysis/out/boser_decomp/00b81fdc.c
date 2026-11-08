// FUN_00b81fdc @ 00b81fdc size=216 calls_out=5 calls_in=2
// strings: 

void FUN_00b81fdc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_01347f20();
  DataMemoryBarrier(0xb);
  if (DAT_01d51a20 != '\x02') {
    FUN_01347fb0();
  }
  iVar1 = thunk_FUN_01be5118(0x9004);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x9004);
  }
  FUN_01bed93e(iVar1 + 0x8000,0xff,0x1004);
  iVar2 = thunk_FUN_01be5118(0x30);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    iVar3 = thunk_FUN_01be5118(0x30);
    if (iVar3 != 0) {
      *(int *)(iVar2 + 0x28) = iVar3;
      *(int *)(iVar3 + 0x24) = iVar2;
      *(undefined4 *)(iVar3 + 0x28) = 0;
      param_1[10] = iVar3;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0;
      param_1[2] = iVar1 + 0x8000;
      param_1[3] = 0xfff;
      param_1[4] = 0xe00;
      param_1[5] = 0;
      *(undefined8 *)(param_1 + 6) = uVar4;
      param_1[8] = 0x800;
      param_1[9] = iVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066439c(8,0x30);
}

