// FUN_01899dc8 @ 01899dc8 size=404 calls_out=6 calls_in=1
// strings: assertion failed: em.len() >= digest_len + 11

void FUN_01899dc8(int *param_1,int *param_2,undefined1 *param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = param_1[2];
  uVar4 = *(uint *)(*param_1 + 0x48);
  uVar1 = uVar4 + uVar5;
  if (param_4 < uVar1 + 0xb) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: em.len() >= digest_len + 11",0x2d,&DAT_01d21c8c);
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d21c9c);
  }
  *param_3 = 0;
  if (param_4 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(1,1,&DAT_01d21cac);
  }
  iVar6 = param_4 - uVar1;
  param_3[1] = 1;
  if (iVar6 != 3) {
    uVar3 = 2;
    do {
      if (param_4 == uVar3) {
        puVar2 = &DAT_01d21cfc;
        goto LAB_01899f1c;
      }
      param_3[uVar3] = 0xff;
      uVar3 = uVar3 + 1;
    } while ((uVar1 - param_4) + uVar3 != -1);
  }
  uVar3 = iVar6 - 1;
  if (uVar3 < param_4) {
    param_3[uVar3] = 0;
    if (param_4 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(iVar6,param_4,param_4,&DAT_01d21ccc);
    }
    if (uVar1 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d21cdc);
    }
    FUN_01bed4e2(param_3 + iVar6,param_1[1],uVar5);
    uVar1 = *(uint *)(*param_2 + 0x48);
    if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar1,0x40,&DAT_01d2571c);
    }
    if (uVar4 != uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_013070f0(uVar4,uVar1,&DAT_01d21cec);
    }
    FUN_01bed4e2(param_3 + iVar6 + uVar5,param_2 + 1,uVar4);
    return;
  }
  puVar2 = &DAT_01d21cbc;
LAB_01899f1c:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar3,param_4,puVar2);
}

