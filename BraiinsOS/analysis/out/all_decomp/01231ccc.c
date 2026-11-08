// FUN_01231ccc @ 01231ccc size=280 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_01231ccc(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar1 = 1;
  if (*param_2 == '\x03') {
    uVar3 = *(uint *)(param_2 + 0xc);
    if (uVar3 != 0) {
      iVar2 = *(int *)(param_2 + 8);
      uVar4 = 0;
      do {
        if ((*(byte *)(iVar2 + uVar4) & 0xdf) == 0x54) {
          if (uVar4 != 0) {
            pcVar5 = (char *)(iVar2 + uVar4);
            if (uVar4 < uVar3) {
              if (*pcVar5 < -0x40) {
LAB_01231d38:
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac(iVar2,uVar3,0,uVar4,&DAT_018adf70);
              }
            }
            else if (uVar3 != uVar4) goto LAB_01231d38;
            iVar2 = FUN_0122d53c(iVar2,uVar4);
            if (iVar2 == 0) {
              return 0;
            }
            uVar3 = uVar3 - uVar4;
            if (uVar3 < 2) {
              if (uVar3 != 1) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac(pcVar5,0,1,0,&DAT_0188a858);
              }
            }
            else if (pcVar5[1] < -0x40) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(pcVar5,uVar3,1,uVar3,&DAT_0188a858);
            }
            uVar1 = FUN_0122f55c(pcVar5 + 1,uVar3 - 1);
            return uVar1;
          }
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
    uVar1 = 0;
  }
  return uVar1;
}

