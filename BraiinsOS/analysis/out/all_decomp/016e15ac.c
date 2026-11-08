// FUN_016e15ac @ 016e15ac size=332 calls_out=3 calls_in=4
// strings: /aws-lc/crypto/bytestring/cbb.c | /aws-lc/crypto/bytestring/cbb.c

undefined8 FUN_016e15ac(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  iVar1 = FUN_016e1048();
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 4) == '\0') {
      piVar5 = (int *)(param_1 + 8);
    }
    else {
      piVar5 = *(int **)(param_1 + 8);
    }
    if (piVar5 != (int *)0x0) {
      uVar4 = piVar5[1];
      uVar3 = param_3 + uVar4;
      if (CARRY4(param_3,uVar4)) {
        FUN_016e9cd0(0xe,0,0x45,"/aws-lc/crypto/bytestring/cbb.c",0x46);
      }
      else {
        uVar2 = piVar5[2];
        if (uVar3 <= uVar2) {
LAB_016e1658:
          if (param_2 != (int *)0x0) {
            *param_2 = *piVar5 + uVar4;
          }
          piVar5[1] = uVar3;
          return 1;
        }
        if ((*(byte *)(piVar5 + 3) & 1) == 0) {
          FUN_016e9cd0(0xe,*(byte *)(piVar5 + 3) & 1,0x45,"/aws-lc/crypto/bytestring/cbb.c",0x4c);
        }
        else {
          uVar4 = uVar2 * 2;
          if ((uVar2 <= uVar4) && (uVar3 < uVar4)) {
            uVar3 = uVar4;
          }
          iVar1 = FUN_0177ad5c(*piVar5);
          if (iVar1 != 0) {
            uVar4 = piVar5[1];
            piVar5[2] = uVar3;
            uVar3 = param_3 + uVar4;
            *piVar5 = iVar1;
            goto LAB_016e1658;
          }
        }
      }
      *(byte *)(piVar5 + 3) = *(byte *)(piVar5 + 3) | 2;
    }
  }
  return 0;
}

