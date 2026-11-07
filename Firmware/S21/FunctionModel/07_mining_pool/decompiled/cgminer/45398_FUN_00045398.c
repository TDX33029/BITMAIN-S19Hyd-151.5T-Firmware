// FUN_00045398 @ 00045398  size=2028  callers=2
// program: cgminer


undefined4
FUN_00045398(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4,code *param_5,
            undefined4 param_6)

{
  longlong param3;
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
  char acStack_8c [104];
  
  if (param_1 != (undefined4 *)0x0) {
    uVar13 = param_2 & 0x10000;
    uVar12 = param_2 & 0xfffeffff;
    switch(*param_1) {
    case 0:
      puVar8 = &DAT_0004d2ac;
      if ((param_2 & 0x20) == 0) {
        puVar8 = &DAT_000569b8;
        uVar1 = 2;
      }
      else {
        uVar1 = 1;
      }
      iVar4 = FUN_00045340(param_4,param_1,acStack_8c);
      if (iVar4 == 0) {
        iVar4 = FUN_00048f14(param_1);
        if (uVar13 == 0) {
          iVar11 = (*param_5)(&DAT_000569c4,1,param_6);
          if (iVar11 != 0) {
            return 0xffffffff;
          }
          if (iVar4 == 0) {
            FUN_0004671c(param_4,acStack_8c);
            uVar1 = (*param_5)("}",1,param_6);
            return uVar1;
          }
        }
        else if (iVar4 == 0) {
LAB_00045898:
          FUN_0004671c(param_4,acStack_8c);
          return 0;
        }
        iVar9 = param_3 + 1;
        iVar11 = FUN_00045290(uVar12,iVar9,0,param_5,param_6);
        if (iVar11 == 0) {
          if ((param_2 & 0x80) == 0) {
            while( true ) {
              iVar11 = FUN_00048f60(param_1,iVar4);
              pcVar5 = (char *)FUN_00048f94(iVar4);
              sVar6 = strlen(pcVar5);
              FUN_00045008(pcVar5,sVar6,param_5,param_6,uVar12);
              iVar7 = (*param_5)(puVar8,uVar1,param_6);
              if (iVar7 != 0) break;
              uVar3 = FUN_00048fa0(iVar4);
              iVar4 = FUN_00045398(uVar3,uVar12,iVar9,param_4,param_5,param_6);
              if (iVar4 != 0) {
                return 0xffffffff;
              }
              if (iVar11 == 0) {
                iVar4 = FUN_00045290(uVar12,param_3,0,param_5,param_6);
                if (iVar4 != 0) {
                  return 0xffffffff;
                }
                goto LAB_00045b20;
              }
              iVar4 = (*param_5)(&DAT_00051eb8,1,param_6);
              if (iVar4 != 0) {
                return 0xffffffff;
              }
              iVar7 = FUN_00045290(uVar12,iVar9,1,param_5,param_6);
              iVar4 = iVar11;
              if (iVar7 != 0) {
                return 0xffffffff;
              }
            }
          }
          else {
            sVar6 = FUN_00048c90(param_1);
            __base = (void *)FUN_000482f8(sVar6 << 2);
            if (__base != (void *)0x0) {
              puVar10 = (undefined4 *)((int)__base + -4);
              uVar2 = 0;
              puVar15 = puVar10;
              while( true ) {
                __nmemb = uVar2 + 1;
                uVar3 = FUN_00048f94(iVar4);
                puVar15 = puVar15 + 1;
                *puVar15 = uVar3;
                iVar4 = FUN_00048f60(param_1,iVar4);
                if (iVar4 == 0) break;
                uVar2 = __nmemb;
              }
              if (sVar6 != __nmemb) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("i == size","dump.c",0x160,"do_dump");
              }
              qsort(__base,__nmemb,4,(__compar_fn_t)&LAB_00044ffc);
              uVar14 = 0;
              do {
                puVar10 = puVar10 + 1;
                pcVar5 = (char *)*puVar10;
                iVar4 = FUN_00048cac(param_1,pcVar5);
                if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("value","dump.c",0x16b,"do_dump");
                }
                sVar6 = strlen(pcVar5);
                FUN_00045008(pcVar5,sVar6,param_5,param_6,uVar12);
                iVar11 = (*param_5)(puVar8,uVar1,param_6);
                if ((iVar11 != 0) ||
                   (iVar4 = FUN_00045398(iVar4,uVar12,iVar9,param_4,param_5,param_6), iVar4 != 0)) {
LAB_00045ab8:
                  FUN_00048310(__base);
                  return 0xffffffff;
                }
                if (uVar14 < uVar2) {
                  iVar4 = (*param_5)(&DAT_00051eb8,1,param_6);
                  if (iVar4 != 0) goto LAB_00045ab8;
                  iVar4 = FUN_00045290(uVar12,iVar9,1,param_5,param_6);
                }
                else {
                  iVar4 = FUN_00045290(uVar12,param_3,0,param_5,param_6);
                }
                if (iVar4 != 0) goto LAB_00045ab8;
                uVar14 = uVar14 + 1;
              } while (uVar14 != __nmemb);
              FUN_00048310(__base);
LAB_00045b20:
              FUN_0004671c(param_4,acStack_8c);
              if (uVar13 == 0) {
                uVar1 = (*param_5)("}",1,param_6);
                return uVar1;
              }
              return 0;
            }
          }
        }
      }
      break;
    case 1:
      iVar4 = FUN_00045340(param_4,param_1,acStack_8c);
      if (iVar4 == 0) {
        uVar2 = FUN_00049018(param_1);
        if (uVar13 == 0) {
          iVar4 = (*param_5)(&DAT_00051e40,1,param_6);
          if (iVar4 != 0) {
            return 0xffffffff;
          }
          if (uVar2 == 0) {
            FUN_0004671c(param_4,acStack_8c);
            uVar1 = (*param_5)("]",1,param_6);
            return uVar1;
          }
        }
        else if (uVar2 == 0) goto LAB_00045898;
        iVar11 = param_3 + 1;
        iVar4 = FUN_00045290(uVar12,iVar11,0,param_5,param_6);
        if (iVar4 == 0) {
          uVar14 = 0;
          while( true ) {
            uVar1 = FUN_00049034(param_1,uVar14);
            iVar4 = FUN_00045398(uVar1,uVar12,iVar11,param_4,param_5,param_6);
            if (iVar4 != 0) break;
            if (uVar14 < uVar2 - 1) {
              iVar4 = (*param_5)(&DAT_00051eb8,1,param_6);
              if (iVar4 != 0) {
                return 0xffffffff;
              }
              iVar4 = FUN_00045290(uVar12,iVar11,1,param_5,param_6);
            }
            else {
              iVar4 = FUN_00045290(uVar12,param_3,0,param_5,param_6);
            }
            if (iVar4 != 0) {
              return 0xffffffff;
            }
            uVar14 = uVar14 + 1;
            if (uVar2 == uVar14) {
              FUN_0004671c(param_4,acStack_8c);
              if (uVar13 == 0) {
                uVar1 = (*param_5)("]",1,param_6);
                return uVar1;
              }
              return 0;
            }
          }
        }
      }
      break;
    case 2:
      uVar1 = FUN_000491e0(param_1);
      uVar3 = FUN_000491fc(param_1);
      uVar1 = FUN_00045008(uVar1,uVar3,param_5,param_6,uVar12);
      return uVar1;
    case 3:
      param3 = FUN_0004943c(param_1);
      iVar4 = snprintf(acStack_8c,100,"%lld",param3);
      uVar1 = (*param_5)(acStack_8c,iVar4,param_6);
      return uVar1;
    case 4:
      FUN_000494e8(param_1);
      iVar4 = FUN_00048668(acStack_8c,100,(param_2 & 0xffff) >> 0xb);
      if (-1 < iVar4) {
        uVar1 = (*param_5)(acStack_8c,iVar4,param_6);
        return uVar1;
      }
      break;
    case 5:
      uVar1 = (*param_5)(&DAT_0004b654,4,param_6);
      return uVar1;
    case 6:
      uVar1 = (*param_5)("false",5,param_6);
      return uVar1;
    case 7:
      uVar1 = (*param_5)(&DAT_000569bc,4,param_6);
      return uVar1;
    }
  }
  return 0xffffffff;
}

