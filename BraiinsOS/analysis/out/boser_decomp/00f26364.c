// FUN_00f26364 @ 00f26364 size=308 calls_out=3 calls_in=2
// strings: 

void FUN_00f26364(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = (int *)thunk_FUN_01be5118(0xb4);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xb4);
  }
  *(undefined1 *)(piVar3 + 3) = 0;
  *piVar3 = 1;
  piVar3[1] = 1;
  piVar3[2] = 0;
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[6] = 0;
  *(undefined1 *)(piVar3 + 7) = 0;
  piVar3[8] = 0;
  piVar3[9] = 0;
  piVar3[10] = 0;
  *(undefined1 *)(piVar3 + 0xb) = 0;
  piVar3[0xc] = 0;
  piVar3[0xd] = 0;
  piVar3[0xe] = 0;
  *(undefined1 *)(piVar3 + 0xf) = 0;
  *(undefined1 *)(piVar3 + 0x13) = 0;
  piVar3[0x10] = 0;
  piVar3[0x11] = 0;
  piVar3[0x12] = 0;
  *(undefined1 *)(piVar3 + 0x17) = 0;
  piVar3[0x14] = 0;
  piVar3[0x15] = 0;
  piVar3[0x16] = 0;
  piVar3[0x18] = 0;
  piVar3[0x19] = 0;
  piVar3[0x1a] = 0;
  *(undefined1 *)(piVar3 + 0x1b) = 0;
  piVar3[0x1c] = 0;
  piVar3[0x1d] = 0;
  piVar3[0x1e] = 0;
  *(undefined1 *)(piVar3 + 0x1f) = 0;
  piVar3[0x20] = 0;
  piVar3[0x21] = 0;
  piVar3[0x22] = 0;
  iVar5 = param_1[1];
  iVar6 = param_1[2];
  piVar3[0x23] = *param_1;
  piVar3[0x24] = iVar5;
  piVar3[0x25] = iVar6;
  piVar3[0x28] = 0;
  piVar3[0x29] = 0;
  piVar3[0x2a] = 0;
  piVar3[0x2b] = 1;
  piVar3[0x2c] = 1;
  *(undefined1 *)(piVar3 + 0x27) = 0;
  piVar3[0x26] = 0;
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xf26488);
    (*pcVar1)();
  }
  FUN_00d366ac(piVar3);
  puVar4 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar4 = 1;
  puVar4[1] = 1;
  puVar4[2] = piVar3;
  return;
}

