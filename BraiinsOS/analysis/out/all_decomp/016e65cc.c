// FUN_016e65cc @ 016e65cc size=2400 calls_out=33 calls_in=0
// strings: /aws-lc/crypto/dsa/dsa.c

undefined4
FUN_016e65cc(int *param_1,uint param_2,undefined4 param_3,char *param_4,char *param_5,int *param_6,
            int *param_7,undefined4 param_8)

{
  code *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  char *pcVar21;
  int local_ec;
  int local_e0;
  char acStack_ac [31];
  byte bStack_8d;
  undefined4 local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  char acStack_6c [32];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if (10000 < param_2) {
    FUN_016e9cd0(10,0,0x6b,"/aws-lc/crypto/dsa/dsa.c",0xbe);
LAB_016e6a18:
    uVar5 = 0;
    goto LAB_016e6a1c;
  }
  pcVar3 = (char *)FUN_0172a898(param_3);
  if (param_4 != (char *)0x0) {
    if (param_5 < pcVar3) goto LAB_016e6a18;
    if (pcVar3 != (char *)0x0) {
      if ((((acStack_ac < param_4) && (param_4 < acStack_ac + (int)pcVar3)) ||
          ((param_4 < acStack_ac && (acStack_ac < param_4 + (int)pcVar3)))) ||
         ((char *)0x20 < pcVar3)) {
LAB_016e6a6c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x16e6a6c);
        (*pcVar1)();
      }
      FUN_016dd1aa(acStack_ac,param_4,pcVar3);
    }
  }
  iVar4 = FUN_017184a8();
  if (iVar4 == 0) {
    uVar5 = 0;
    iVar14 = 0;
  }
  else {
    FUN_017185b4();
    uVar5 = FUN_017186b0(iVar4);
    uVar6 = FUN_017186b0(iVar4);
    uVar7 = FUN_017186b0(iVar4);
    uVar8 = FUN_017186b0(iVar4);
    uVar9 = FUN_017186b0(iVar4);
    uVar10 = FUN_017186b0(iVar4);
    uVar11 = FUN_017186b0(iVar4);
    iVar12 = FUN_017186b0(iVar4);
    if (iVar12 == 0) {
LAB_016e6a70:
      iVar14 = 0;
      uVar5 = 0;
    }
    else {
      if (param_2 < 0x200) {
        param_2 = 0x200;
      }
      uVar13 = FUN_01714250();
      uVar18 = (param_2 + 0x3f & 0xffffffc0) - 1;
      iVar14 = FUN_0171e6a8(iVar12,uVar13,uVar18);
      if (iVar14 == 0) goto LAB_016e6a70;
      iVar14 = FUN_0171e414(param_8,0);
      if (iVar14 != 0) {
        if (param_4 != (char *)0x0) {
          local_e0 = 0;
          goto LAB_016e676c;
        }
        local_e0 = 0;
        do {
          iVar14 = FUN_0174bccc(acStack_ac,pcVar3);
          if (iVar14 != 1) {
                    /* WARNING: Subroutine does not return */
            FUN_016d2c24();
          }
          param_4 = (char *)0x0;
LAB_016e676c:
          if (pcVar3 != (char *)0x0) {
            if ((((acStack_6c < acStack_ac) && (acStack_ac < acStack_6c + (int)pcVar3)) ||
                ((pcVar21 = acStack_ac + (int)pcVar3, acStack_ac < acStack_6c &&
                 (acStack_6c < pcVar21)))) || ((char *)0x20 < pcVar3)) goto LAB_016e6a6c;
            FUN_016dd1aa(acStack_6c,acStack_ac,pcVar3);
            if (((&local_4c < acStack_ac) && (acStack_ac < (char *)((int)&local_4c + (int)pcVar3)))
               || ((acStack_ac < &local_4c && (&local_4c < pcVar21)))) goto LAB_016e6a6c;
            FUN_016dd1aa(&local_4c,acStack_ac,pcVar3);
            pcVar21 = acStack_6c + (int)pcVar3;
            do {
              pcVar16 = pcVar21 + -1;
              cVar2 = *pcVar16;
              *pcVar16 = cVar2 + '\x01';
              if ((char)(cVar2 + '\x01') != '\0') break;
              pcVar17 = pcVar21 + (-2 - (int)acStack_6c);
              pcVar21 = pcVar16;
            } while (pcVar17 < pcVar3);
          }
          iVar14 = FUN_0173e488(acStack_ac,pcVar3,&local_8c,0,param_3,0);
          if (iVar14 == 0) break;
          iVar14 = FUN_0173e488(acStack_6c,pcVar3,&local_4c,0,param_3,0);
          if (iVar14 == 0) break;
          pcVar21 = pcVar3 + -1;
          uVar19 = 0;
          if (pcVar3 != (char *)0x0) {
            if (pcVar21 < (char *)0x3) {
LAB_016e6ab0:
              acStack_ac[uVar19 + 0x20] = acStack_ac[uVar19 + 0x20] ^ acStack_6c[uVar19 + 0x20];
              if (((char *)(uVar19 + 1) < pcVar3) &&
                 (acStack_ac[uVar19 + 0x21] = acStack_ac[uVar19 + 0x21] ^ acStack_6c[uVar19 + 0x21],
                 (char *)(uVar19 + 2) < pcVar3)) {
                acStack_ac[uVar19 + 0x22] = acStack_6c[uVar19 + 0x22] ^ acStack_ac[uVar19 + 0x22];
              }
            }
            else {
              local_8c = local_4c ^ local_8c;
              uVar19 = (uint)pcVar3 >> 2;
              if (((((uVar19 == 1) || (local_88 = local_48 ^ local_88, uVar19 == 2)) ||
                   (local_84 = local_44 ^ local_84, uVar19 == 3)) ||
                  ((local_80 = local_40 ^ local_80, uVar19 == 4 ||
                   (local_7c = local_7c ^ local_3c, uVar19 == 5)))) ||
                 ((local_78 = local_38 ^ local_78, uVar19 == 6 ||
                  (local_74 = local_34 ^ local_74, uVar19 != 8)))) {
                uVar19 = (uint)pcVar3 & 0xfffffffc;
                if (((uint)pcVar3 & 3) != 0) goto LAB_016e6ab0;
              }
              else {
                local_70 = local_30 ^ local_70;
              }
            }
          }
          local_8c = CONCAT31(local_8c._1_3_,~((byte)~(byte)((local_8c << 0x19) >> 0x18) >> 1));
          acStack_ac[(int)(pcVar3 + 0x1f)] = acStack_ac[(int)(pcVar3 + 0x1f)] | 1;
          iVar14 = FUN_017150f4(&local_8c,pcVar3,uVar8);
          if (iVar14 == 0) break;
          iVar14 = FUN_0174d720(uVar8,0x32,iVar4,param_4 == (char *)0x0,param_8);
          if (0 < iVar14) {
            iVar14 = FUN_0171e414(param_8,2,0);
            if ((iVar14 != 0) && (iVar14 = FUN_0171e414(param_8,3,0), iVar14 != 0)) {
              local_ec = 0;
              do {
                iVar20 = 0;
                iVar14 = 0;
                FUN_01714350(uVar7);
                do {
                  if (pcVar3 != (char *)0x0) {
                    pcVar16 = pcVar21;
                    pcVar17 = acStack_6c + (int)pcVar21;
                    do {
                      cVar2 = *pcVar17;
                      *pcVar17 = cVar2 + '\x01';
                      if ((char)(cVar2 + '\x01') != '\0') break;
                      pcVar16 = pcVar16 + -1;
                      pcVar17 = pcVar17 + -1;
                    } while (pcVar16 < pcVar3);
                  }
                  iVar15 = FUN_0173e488(acStack_6c,pcVar3,&local_8c,0,param_3,0);
                  if ((((iVar15 == 0) ||
                       (iVar15 = FUN_017150f4(&local_8c,pcVar3,uVar5), iVar15 == 0)) ||
                      (iVar15 = FUN_0171e6a8(uVar5,uVar5,iVar20), iVar15 == 0)) ||
                     (iVar15 = FUN_0171a934(uVar7,uVar7,uVar5), iVar15 == 0)) goto LAB_016e6d4c;
                  iVar14 = iVar14 + 1;
                  iVar20 = iVar20 + (int)pcVar3 * 8;
                } while (iVar14 <= (int)(uVar18 / 0xa0));
                iVar14 = FUN_01722efc(uVar7,uVar18);
                if (((iVar14 == 0) || (iVar14 = FUN_017147ac(uVar9,uVar7), iVar14 == 0)) ||
                   ((iVar14 = FUN_0171a934(uVar9,uVar9,iVar12), iVar14 == 0 ||
                    ((iVar14 = FUN_0171e808(uVar5,uVar8), iVar14 == 0 ||
                     (iVar14 = FUN_0171ead4(0,uVar10,uVar9,uVar5,iVar4), iVar14 == 0)))))) break;
                uVar13 = FUN_01714250();
                iVar14 = FUN_0171aa2c(uVar5,uVar10,uVar13);
                if ((iVar14 == 0) || (iVar14 = FUN_0171aa2c(uVar11,uVar9,uVar5), iVar14 == 0))
                break;
                iVar14 = FUN_01715760(uVar11,iVar12);
                if (-1 < iVar14) {
                  iVar14 = FUN_0174d720(uVar11,0x32,iVar4,1,param_8);
                  if (0 < iVar14) {
                    iVar14 = FUN_0171e414(param_8,2,1);
                    if (iVar14 == 0) goto LAB_016e6a70;
                    uVar7 = FUN_01714250();
                    iVar14 = FUN_0171aa2c(iVar12,uVar11,uVar7);
                    if (((iVar14 == 0) ||
                        (iVar14 = FUN_0171ead4(uVar5,0,iVar12,uVar8,iVar4), iVar14 == 0)) ||
                       (iVar14 = FUN_01720560(uVar11,iVar4), iVar14 == 0)) goto LAB_016e6a70;
                    iVar20 = FUN_01714a30(iVar12,2);
                    if (iVar20 == 0) goto LAB_016e6d50;
                    iVar20 = 2;
                    goto LAB_016e6e60;
                  }
                  if (iVar14 != 0) break;
                }
                local_ec = local_ec + 1;
                if (local_ec == 0x1000) goto LAB_016e69b8;
                iVar14 = FUN_0171e414(param_8,0);
                if (iVar14 == 0) break;
              } while( true );
            }
            break;
          }
          if (iVar14 != 0) break;
LAB_016e69b8:
          local_e0 = local_e0 + 1;
          iVar14 = FUN_0171e414(param_8,0,local_e0);
          if (iVar14 == 0) break;
        } while( true );
      }
LAB_016e6d4c:
      iVar14 = 0;
LAB_016e6d50:
      uVar5 = 0;
    }
LAB_016e6a78:
    FUN_01718904(iVar4);
    FUN_017184e8(iVar4);
  }
  FUN_0171c904(iVar14);
  FUN_0177aaa0(acStack_ac,0x20);
LAB_016e6a1c:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar5;
LAB_016e6e60:
  iVar15 = FUN_01721398(uVar6,iVar12,uVar5,uVar11,iVar4,iVar14);
  if (iVar15 == 0) goto LAB_016e6d50;
  iVar15 = FUN_01718124(uVar6);
  if (iVar15 == 0) {
    iVar12 = FUN_0171e414(param_8,3,1);
    if (iVar12 != 0) {
      FUN_017046e0(*param_1);
      FUN_017046e0(param_1[1]);
      FUN_017046e0(param_1[2]);
      iVar12 = FUN_0171485c(uVar11);
      *param_1 = iVar12;
      iVar12 = FUN_0171485c(uVar8);
      param_1[1] = iVar12;
      iVar12 = FUN_0171485c(uVar6);
      param_1[2] = iVar12;
      uVar5 = 0;
      if (*param_1 == 0) goto LAB_016e6a78;
      if (iVar12 != 0 && param_1[1] != 0) {
        uVar5 = 1;
        if (param_6 != (int *)0x0) {
          *param_6 = local_ec;
        }
        if (param_7 != (int *)0x0) {
          *param_7 = iVar20;
        }
        goto LAB_016e6a78;
      }
    }
    goto LAB_016e6d50;
  }
  uVar7 = FUN_01714250();
  iVar15 = FUN_0171a934(iVar12,iVar12,uVar7);
  if (iVar15 == 0) goto LAB_016e6d50;
  iVar20 = iVar20 + 1;
  goto LAB_016e6e60;
}

