// FUN_000520c4 @ 000520c4  size=2028  callers=2
// program: bmminer


undefined4
FUN_000520c4(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4,code *param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  int iVar7;
  void *__base;
  undefined *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  size_t __nmemb;
  uint uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  char acStack_8c [104];
  
  if (param_1 != (undefined4 *)0x0) {
    uVar13 = param_2 & 0x10000;
    uVar12 = param_2 & 0xfffeffff;
    switch(*param_1) {
    case 0:
      puVar8 = &DAT_0006e878;
      if ((param_2 & 0x20) == 0) {
        puVar8 = &DAT_0007310c;
        uVar1 = 2;
      }
      else {
        uVar1 = 1;
      }
      iVar4 = FUN_0005206c(param_4,param_1,acStack_8c);
      if (iVar4 == 0) {
        iVar4 = FUN_00055c3c(param_1);
        if (uVar13 == 0) {
          iVar11 = (*param_5)(&DAT_0006ec5c,1,param_6);
          if (iVar11 != 0) {
            return 0xffffffff;
          }
          if (iVar4 == 0) {
            FUN_00053448(param_4,acStack_8c);
            uVar1 = (*param_5)(&DAT_0007313c,1,param_6);
            return uVar1;
          }
        }
        else if (iVar4 == 0) {
LAB_000525c4:
          FUN_00053448(param_4,acStack_8c);
          return 0;
        }
        iVar9 = param_3 + 1;
        iVar11 = FUN_00051fbc(uVar12,iVar9,0,param_5,param_6);
        if (iVar11 == 0) {
          if ((param_2 & 0x80) == 0) {
            while( true ) {
              iVar11 = FUN_00055c88(param_1,iVar4);
              pcVar5 = (char *)FUN_00055cbc(iVar4);
              sVar6 = strlen(pcVar5);
              FUN_00051d34(pcVar5,sVar6,param_5,param_6,uVar12);
              iVar7 = (*param_5)(puVar8,uVar1,param_6);
              if (iVar7 != 0) break;
              uVar3 = FUN_00055cc8(iVar4);
              iVar4 = FUN_000520c4(uVar3,uVar12,iVar9,param_4,param_5,param_6);
              if (iVar4 != 0) {
                return 0xffffffff;
              }
              if (iVar11 == 0) {
                iVar4 = FUN_00051fbc(uVar12,param_3,0,param_5,param_6);
                if (iVar4 != 0) {
                  return 0xffffffff;
                }
                goto LAB_0005284c;
              }
              iVar4 = (*param_5)(&DAT_00073124,1,param_6);
              if (iVar4 != 0) {
                return 0xffffffff;
              }
              iVar7 = FUN_00051fbc(uVar12,iVar9,1,param_5,param_6);
              iVar4 = iVar11;
              if (iVar7 != 0) {
                return 0xffffffff;
              }
            }
          }
          else {
            sVar6 = FUN_000559b8(param_1);
            __base = (void *)FUN_00055024(sVar6 << 2);
            if (__base != (void *)0x0) {
              puVar10 = (undefined4 *)((int)__base + -4);
              uVar2 = 0;
              puVar15 = puVar10;
              while( true ) {
                __nmemb = uVar2 + 1;
                uVar3 = FUN_00055cbc(iVar4);
                puVar15 = puVar15 + 1;
                *puVar15 = uVar3;
                iVar4 = FUN_00055c88(param_1,iVar4);
                if (iVar4 == 0) break;
                uVar2 = __nmemb;
              }
              if (sVar6 != __nmemb) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("i == size","dump.c",0x160,"do_dump");
              }
              qsort(__base,__nmemb,4,(__compar_fn_t)&LAB_00051d28);
              uVar14 = 0;
              do {
                puVar10 = puVar10 + 1;
                pcVar5 = (char *)*puVar10;
                iVar4 = FUN_000559d4(param_1,pcVar5);
                if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("value","dump.c",0x16b,"do_dump");
                }
                sVar6 = strlen(pcVar5);
                FUN_00051d34(pcVar5,sVar6,param_5,param_6,uVar12);
                iVar11 = (*param_5)(puVar8,uVar1,param_6);
                if ((iVar11 != 0) ||
                   (iVar4 = FUN_000520c4(iVar4,uVar12,iVar9,param_4,param_5,param_6), iVar4 != 0)) {
LAB_000527e4:
                  FUN_0005503c(__base);
                  return 0xffffffff;
                }
                if (uVar14 < uVar2) {
                  iVar4 = (*param_5)(&DAT_00073124,1,param_6);
                  if (iVar4 != 0) goto LAB_000527e4;
                  iVar4 = FUN_00051fbc(uVar12,iVar9,1,param_5,param_6);
                }
                else {
                  iVar4 = FUN_00051fbc(uVar12,param_3,0,param_5,param_6);
                }
                if (iVar4 != 0) goto LAB_000527e4;
                uVar14 = uVar14 + 1;
              } while (uVar14 != __nmemb);
              FUN_0005503c(__base);
LAB_0005284c:
              FUN_00053448(param_4,acStack_8c);
              if (uVar13 == 0) {
                uVar1 = (*param_5)(&DAT_0007313c,1,param_6);
                return uVar1;
              }
              return 0;
            }
          }
        }
      }
      break;
    case 1:
      iVar4 = FUN_0005206c(param_4,param_1,acStack_8c);
      if (iVar4 == 0) {
        uVar2 = FUN_00055d40(param_1);
        if (uVar13 == 0) {
          iVar4 = (*param_5)(&DAT_00073120,1,param_6);
          if (iVar4 != 0) {
            return 0xffffffff;
          }
          if (uVar2 == 0) {
            FUN_00053448(param_4,acStack_8c);
            uVar1 = (*param_5)(&DAT_00074754,1,param_6);
            return uVar1;
          }
        }
        else if (uVar2 == 0) goto LAB_000525c4;
        iVar11 = param_3 + 1;
        iVar4 = FUN_00051fbc(uVar12,iVar11,0,param_5,param_6);
        if (iVar4 == 0) {
          uVar14 = 0;
          while( true ) {
            uVar1 = FUN_00055d5c(param_1,uVar14);
            iVar4 = FUN_000520c4(uVar1,uVar12,iVar11,param_4,param_5,param_6);
            if (iVar4 != 0) break;
            if (uVar14 < uVar2 - 1) {
              iVar4 = (*param_5)(&DAT_00073124,1,param_6);
              if (iVar4 != 0) {
                return 0xffffffff;
              }
              iVar4 = FUN_00051fbc(uVar12,iVar11,1,param_5,param_6);
            }
            else {
              iVar4 = FUN_00051fbc(uVar12,param_3,0,param_5,param_6);
            }
            if (iVar4 != 0) {
              return 0xffffffff;
            }
            uVar14 = uVar14 + 1;
            if (uVar2 == uVar14) {
              FUN_00053448(param_4,acStack_8c);
              if (uVar13 == 0) {
                uVar1 = (*param_5)(&DAT_00074754,1,param_6);
                return uVar1;
              }
              return 0;
            }
          }
        }
      }
      break;
    case 2:
      uVar1 = FUN_00055f08(param_1);
      uVar3 = FUN_00055f24(param_1);
      uVar1 = FUN_00051d34(uVar1,uVar3,param_5,param_6,uVar12);
      return uVar1;
    case 3:
      uVar16 = FUN_00056164(param_1);
      iVar4 = snprintf(acStack_8c,100,"%lld");
      uVar1 = (*param_5)(acStack_8c,iVar4,param_6,param_5,uVar16);
      return uVar1;
    case 4:
      FUN_00056210(param_1);
      iVar4 = FUN_00055390(acStack_8c,100,(param_2 & 0xffff) >> 0xb);
      if (-1 < iVar4) {
        uVar1 = (*param_5)(acStack_8c,iVar4,param_6);
        return uVar1;
      }
      break;
    case 5:
      uVar1 = (*param_5)(&DAT_000692c8,4,param_6);
      return uVar1;
    case 6:
      uVar1 = (*param_5)("false",5,param_6);
      return uVar1;
    case 7:
      uVar1 = (*param_5)(&DAT_00073110,4,param_6);
      return uVar1;
    }
  }
  return 0xffffffff;
}

