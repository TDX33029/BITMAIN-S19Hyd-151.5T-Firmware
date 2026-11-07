// FUN_0004785c @ 0004785c  size=1188  callers=2
// program: cgminer


int FUN_0004785c(int param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  size_t sVar8;
  
  uVar4 = *(int *)(param_1 + 0x38) + 1;
  *(uint *)(param_1 + 0x38) = uVar4;
  if (0x800 < uVar4) {
    FUN_00046b44(param_3,param_1,2,"maximum parsing depth reached");
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x3c);
  if (iVar5 == 0x101) {
    iVar5 = FUN_00049408(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  }
  else if (iVar5 < 0x102) {
    if (iVar5 == 0x5b) {
      iVar5 = FUN_00048fb8();
      if (iVar5 == 0) {
        return 0;
      }
      FUN_00047044(param_1,param_3);
      iVar3 = *(int *)(param_1 + 0x3c);
      if (iVar3 != 0x5d) {
        while (iVar3 != 0) {
          iVar3 = FUN_0004785c(param_1,param_2,param_3);
          if ((iVar3 == 0) || (iVar3 = FUN_00049f0c(iVar5), iVar3 != 0)) goto LAB_00047b84;
          FUN_00047044(param_1,param_3);
          if (*(int *)(param_1 + 0x3c) != 0x2c) {
            if (*(int *)(param_1 + 0x3c) == 0x5d) goto LAB_000478c4;
            break;
          }
          FUN_00047044(param_1,param_3);
          iVar3 = *(int *)(param_1 + 0x3c);
        }
        FUN_00046b44(param_3,param_1,8,"\']\' expected");
LAB_00047b84:
        if (*(int *)(iVar5 + 4) == -1) {
          return 0;
        }
        piVar6 = (int *)(iVar5 + 4);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar6 + -1;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar3;
LAB_00047bac:
        if (iVar3 == 0) {
          FUN_000495e4(iVar5);
          return 0;
        }
        return 0;
      }
      goto LAB_000478c4;
    }
    if (iVar5 < 0x5c) {
      if (iVar5 == -1) {
        FUN_00046b44(param_3,param_1,8,"invalid token");
        return 0;
      }
LAB_00047bc4:
      FUN_00046b44(param_3,param_1,8,"unexpected token");
      return 0;
    }
    if (iVar5 == 0x7b) {
      iVar5 = FUN_00048c28();
      if (iVar5 == 0) {
        return 0;
      }
      FUN_00047044(param_1,param_3);
      if (*(int *)(param_1 + 0x3c) != 0x7d) {
        if (*(int *)(param_1 + 0x3c) == 0x100) {
          pvVar7 = *(void **)(param_1 + 0x40);
          sVar8 = *(size_t *)(param_1 + 0x44);
          *(undefined4 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x44) = 0;
          if (pvVar7 == (void *)0x0) {
            return 0;
          }
          while( true ) {
            pvVar2 = memchr(pvVar7,0,sVar8);
            if (pvVar2 != (void *)0x0) {
              FUN_00048310(pvVar7);
              FUN_00046b44(param_3,param_1,0xd,"NUL byte in object key not supported");
              goto LAB_00047a8c;
            }
            if (((param_2 & 1) != 0) && (iVar3 = FUN_00048cac(iVar5,pvVar7), iVar3 != 0)) {
              FUN_00048310(pvVar7);
              FUN_00046b44(param_3,param_1,0xe,"duplicate object key");
              goto LAB_00047a8c;
            }
            FUN_00047044(param_1,param_3);
            if (*(int *)(param_1 + 0x3c) != 0x3a) {
              FUN_00048310(pvVar7,param_3);
              FUN_00046b44(param_3,param_1,8,"\':\' expected");
              goto LAB_00047a8c;
            }
            FUN_00047044(param_1);
            iVar3 = FUN_0004785c(param_1,param_2,param_3);
            if (iVar3 == 0) {
              FUN_00048310(pvVar7,pvVar7);
              goto LAB_00047a8c;
            }
            iVar3 = FUN_000498a4(iVar5);
            if (iVar3 != 0) {
              FUN_00048310(pvVar7);
              goto LAB_00047a8c;
            }
            FUN_00048310(pvVar7);
            FUN_00047044(param_1,param_3);
            if (*(int *)(param_1 + 0x3c) != 0x2c) break;
            FUN_00047044(param_1,param_3);
            if (*(int *)(param_1 + 0x3c) != 0x100) goto LAB_00047c44;
            pvVar7 = *(void **)(param_1 + 0x40);
            sVar8 = *(size_t *)(param_1 + 0x44);
            *(undefined4 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x44) = 0;
            if (pvVar7 == (void *)0x0) {
              return 0;
            }
          }
          if (*(int *)(param_1 + 0x3c) == 0x7d) goto LAB_000478c4;
          FUN_00046b44(param_3,param_1,8,"\'}\' expected");
        }
        else {
LAB_00047c44:
          FUN_00046b44(param_3,param_1,8,"string or \'}\' expected");
        }
LAB_00047a8c:
        if (*(int *)(iVar5 + 4) == -1) {
          return 0;
        }
        piVar6 = (int *)(iVar5 + 4);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar6 + -1;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar3;
        goto LAB_00047bac;
      }
      goto LAB_000478c4;
    }
    if (iVar5 != 0x100) goto LAB_00047bc4;
    pvVar7 = *(void **)(param_1 + 0x40);
    sVar8 = *(size_t *)(param_1 + 0x44);
    if (((param_2 & 0x10) == 0) && (pvVar2 = memchr(pvVar7,0,sVar8), pvVar2 != (void *)0x0)) {
      FUN_00046b44(param_3,param_1,0xb,"\\u0000 is not allowed without JSON_ALLOW_NUL");
      return 0;
    }
    iVar5 = FUN_00049170(pvVar7,sVar8);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else if (iVar5 == 0x103) {
    iVar5 = FUN_000495c0();
  }
  else if (iVar5 < 0x103) {
    iVar5 = FUN_0004948c((int)*(undefined8 *)(param_1 + 0x40));
  }
  else if (iVar5 == 0x104) {
    iVar5 = FUN_000495cc();
  }
  else {
    if (iVar5 != 0x105) goto LAB_00047bc4;
    iVar5 = FUN_000495d8();
  }
  if (iVar5 == 0) {
    return 0;
  }
LAB_000478c4:
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  return iVar5;
}

