// FUN_008d121c @ 008d121c size=364 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_008d121c(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xad)) {
  case 0:
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x94);
    iVar2 = *(int *)(param_1 + 0x90);
    *(int *)(param_1 + 0x98) = iVar2;
    if (*(int *)(param_1 + 0x94) != 4) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(0,(int *)(param_1 + 0x9c),&DAT_005688c0,0);
    }
    uVar3 = *(byte *)(*(int *)(param_1 + 0xa4) + 0x1e) & 0xf;
    uVar4 = uVar3;
    if (*(byte *)(param_1 + 0xae) == 0) {
      uVar4 = uVar3 | 0x10;
    }
    *(uint *)(param_1 + 0xa0) =
         uVar4 | (uint)*(byte *)(param_1 + 0xaf) << 0x10 | iVar2 << 0x18 | 0x540;
    *(byte *)(param_1 + 0xab) = *(byte *)(param_1 + 0xaf);
    *(undefined1 *)(param_1 + 0xaa) = 5;
    *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xae) ^ 1;
    *(char *)(param_1 + 0xac) = (char)iVar2;
    *(char *)(param_1 + 0xa9) = (char)uVar3;
    *(undefined2 *)(param_1 + 0x19) = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0xa4);
    *(uint **)(param_1 + 8) = (uint *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xc) = 4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01864fc0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01864fc0);
  }
  iVar2 = FUN_008d094c(param_1,*param_2);
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0xad) = 3;
    return 1;
  }
  if (*(char *)(param_1 + 0x19) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x88);
    iVar2 = 0x28;
  }
  else {
    if (*(char *)(param_1 + 0x19) != '\x04') goto LAB_008d134c;
    cVar1 = *(char *)(param_1 + 0x78);
    iVar2 = 0x20;
  }
  if (cVar1 == '\x03') {
    FUN_00a07b4c(param_1 + iVar2);
    *(undefined1 *)(param_1 + 0xad) = 1;
    return 0;
  }
LAB_008d134c:
  *(undefined1 *)(param_1 + 0xad) = 1;
  return 0;
}

