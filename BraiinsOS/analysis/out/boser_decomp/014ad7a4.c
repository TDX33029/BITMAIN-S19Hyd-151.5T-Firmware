// FUN_014ad7a4 @ 014ad7a4 size=220 calls_out=2 calls_in=2
// strings: 

void FUN_014ad7a4(uint *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_30;
  uint local_2c;
  
  iVar3 = param_2[2];
  do {
    if (iVar3 == 0) {
      uVar1 = 4;
LAB_014ad854:
      *(undefined1 *)param_1 = uVar1;
      return;
    }
    FUN_019dfa94(&local_30,*(undefined4 *)(*param_2 + 8),*(undefined4 *)(*param_2 + 0xc),param_3,
                 param_2[1],iVar3);
    if ((char)local_30 == '\x05') {
      uVar1 = 5;
      goto LAB_014ad854;
    }
    if ((local_30 & 0xff) != 4) {
      *param_1 = local_30;
      param_1[1] = local_2c;
      return;
    }
    iVar2 = param_2[1];
    uVar4 = param_2[2];
    param_2[1] = 1;
    param_2[2] = 0;
    if (uVar4 < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d20b98);
    }
    iVar3 = uVar4 - local_2c;
    param_2[1] = iVar2 + local_2c;
    param_2[2] = iVar3;
    if (local_2c == 0) {
      *param_1 = 0x1701;
      param_1[1] = 0;
      return;
    }
  } while( true );
}

