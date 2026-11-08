// FUN_015a1bec @ 015a1bec size=284 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_015a1bec(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = 1;
  if (*param_2 == '\x03') {
    uVar3 = *(uint *)(param_2 + 0xc);
    if (uVar3 != 0) {
      iVar5 = *(int *)(param_2 + 8);
      uVar4 = 0;
      do {
        if ((*(byte *)(iVar5 + uVar4) & 0xdf) == 0x54) {
          if (uVar4 != 0) {
            if (uVar4 < uVar3) {
              if (*(char *)(iVar5 + uVar4) < -0x40) {
LAB_015a1c60:
                    /* WARNING: Subroutine does not return */
                FUN_012fb514(iVar5,uVar3,0,uVar4,&DAT_01d2e668);
              }
            }
            else if (uVar3 != uVar4) goto LAB_015a1c60;
          }
          iVar2 = FUN_0159e180(iVar5,uVar4);
          if (iVar2 == 0) {
            return 0;
          }
          uVar3 = uVar3 - uVar4;
          iVar5 = iVar5 + uVar4;
          if (uVar3 < 2) {
            if (uVar3 != 1) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(iVar5,0,1,0,&DAT_01cfc470);
            }
          }
          else if (*(char *)(iVar5 + 1) < -0x40) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(iVar5,uVar3,1,uVar3,&DAT_01cfc470);
          }
          uVar1 = FUN_0159fb64(iVar5 + 1,uVar3 - 1);
          return uVar1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
    uVar1 = 0;
  }
  return uVar1;
}

