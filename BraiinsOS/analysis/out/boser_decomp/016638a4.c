// FUN_016638a4 @ 016638a4 size=544 calls_out=9 calls_in=1
// strings: internal error: entered unreachable code

/* WARNING: Control flow encountered bad instruction data */

int * FUN_016638a4(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_25;
  
  if ((char)param_1[1] != '\0') {
    if ((char)param_1[1] == '\x01') {
      return param_1;
    }
    return (int *)0x0;
  }
  if (param_2 != (int *)0x0) {
    iVar2 = *param_2;
    *param_2 = 0;
    if (iVar2 != 0) {
      *param_1 = iVar2;
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_01663a3c;
    }
  }
  FUN_01bed93e(&local_48,0,0x20);
  iVar2 = FUN_01665068(&local_48,0x20);
  puVar1 = local_48;
  if (iVar2 != 0) {
    FUN_01663adc(iVar2,&DAT_01d06ec8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DataMemoryBarrier(0xb);
  if (DAT_01d4ef00 != 0) {
    local_25 = 1;
    local_48 = &local_25;
    FUN_019a768c(&DAT_01d4ef00,0,&local_48,&DAT_01d06e54,&DAT_01d06e78);
  }
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x158);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x158);
  }
  *puVar3 = 1;
  puVar3[1] = 1;
  FUN_01bed93e(puVar3 + 2,0,0x100);
  iVar2 = param_1[1];
  puVar3[0x50] = 0x10000;
  puVar3[0x51] = 0;
  puVar3[0x52] = 0x10000;
  puVar3[0x44] = puVar1;
  puVar3[0x45] = local_44;
  puVar3[0x46] = local_40;
  puVar3[0x4a] = local_30;
  puVar3[0x4b] = local_2c;
  piVar4 = (int *)*param_1;
  puVar3[0x53] = 0;
  puVar3[0x47] = local_3c;
  puVar3[0x48] = local_38;
  puVar3[0x49] = local_34;
  puVar3[0x42] = 0x40;
  puVar3[0x4c] = 0;
  puVar3[0x4d] = 0;
  puVar3[0x4e] = 0;
  puVar3[0x4f] = 0;
  puVar3[0x54] = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = (int)puVar3;
  if ((char)iVar2 == '\x01') {
    iVar2 = *piVar4 + -1;
    *piVar4 = iVar2;
    if (iVar2 == 0) {
      FUN_01663bac();
      return param_1;
    }
    return param_1;
  }
  if ((char)iVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2f25c);
  }
LAB_01663a3c:
  FUN_019a2bcc(param_1,&LAB_01663b78);
  return param_1;
}

