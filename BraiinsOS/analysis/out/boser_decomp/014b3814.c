// FUN_014b3814 @ 014b3814 size=208 calls_out=2 calls_in=6
// strings: 

void FUN_014b3814(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_28;
  uint local_24;
  
  iVar3 = param_2[2];
  do {
    if (iVar3 == 0) {
      uVar1 = 4;
LAB_014b38b8:
      *(undefined1 *)param_1 = uVar1;
      return;
    }
    FUN_019e867c(&local_28,*param_2,param_3,param_2[1],iVar3);
    if ((char)local_28 == '\x05') {
      uVar1 = 5;
      goto LAB_014b38b8;
    }
    if ((local_28 & 0xff) != 4) {
      *param_1 = local_28;
      param_1[1] = local_24;
      return;
    }
    iVar2 = param_2[1];
    uVar4 = param_2[2];
    param_2[1] = 1;
    param_2[2] = 0;
    if (uVar4 < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d20b98);
    }
    iVar3 = uVar4 - local_24;
    param_2[1] = iVar2 + local_24;
    param_2[2] = iVar3;
    if (local_24 == 0) {
      *param_1 = 0x1701;
      param_1[1] = 0;
      return;
    }
  } while( true );
}

