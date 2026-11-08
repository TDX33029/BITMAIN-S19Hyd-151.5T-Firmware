// FUN_015fff9c @ 015fff9c size=280 calls_out=2 calls_in=1
// strings: 

int FUN_015fff9c(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = 0x1d;
  }
  else {
    uVar3 = param_1[1];
    uVar5 = param_1[2];
    uVar6 = param_1[3];
    if (uVar6 < uVar5) goto LAB_01600010;
    if (uVar5 != 0) {
      if (uVar5 < uVar3) {
        if (*(char *)(iVar1 + uVar5) < -0x40) goto LAB_01600010;
      }
      else if (uVar5 != uVar3) goto LAB_01600010;
    }
    if (uVar6 != 0) {
      if (uVar6 < uVar3) {
        if (*(char *)(iVar1 + uVar6) < -0x40) {
LAB_01600010:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514();
        }
      }
      else if (uVar6 != uVar3) goto LAB_01600010;
    }
    iVar4 = uVar6 - uVar5;
    pbVar2 = (byte *)(iVar1 + uVar5);
    if (iVar4 == 1) {
      uVar3 = (uint)*pbVar2;
      if ((uVar3 - 0x61 & 0xff) < 0x19) {
        iVar1 = uVar3 - 0x5f;
      }
      else {
        iVar1 = 0x1c;
        if (uVar3 == 0x7a) {
          iVar1 = 0x1b;
        }
      }
    }
    else {
      if (iVar4 == 7) {
        iVar1 = thunk_FUN_01bed842(pbVar2,&DAT_00531066,7);
        if (iVar1 == 0) {
          return 1;
        }
      }
      else if ((iVar4 == 2) && (*(short *)pbVar2 == 0x6372)) {
        return 0;
      }
      iVar1 = 0x1c;
    }
  }
  return iVar1;
}

