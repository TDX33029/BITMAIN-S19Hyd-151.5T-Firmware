// FUN_016e0804 @ 016e0804 size=684 calls_out=11 calls_in=1
// strings: /aws-lc/crypto/bn_extra/convert.c | /aws-lc/crypto/bn_extra/convert.c | decode_hex | /aws-lc/crypto/bn_extra/convert.c | decode_hex | /aws-lc/crypto/bn_extra/convert.c

void FUN_016e0804(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *extraout_r1;
  char *extraout_r1_00;
  char *extraout_r1_01;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  undefined8 uVar12;
  byte local_2d;
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  if ((param_2 != (char *)0x0) && (cVar1 = *param_2, cVar1 != '\0')) {
    pcVar2 = param_2;
    if (cVar1 == '-') {
      pcVar2 = param_2 + 1;
    }
    uVar9 = (uint)(cVar1 == '-');
    pcVar4 = pcVar2 + -1;
    do {
      pcVar5 = pcVar4;
      pcVar4 = pcVar5 + 1;
      uVar12 = FUN_0177b260(*pcVar4);
      param_2 = (char *)((ulonglong)uVar12 >> 0x20);
      if ((int)uVar12 == 0) break;
    } while (pcVar4 != pcVar2 + (0x7fffffff - uVar9));
    pcVar5 = pcVar5 + (1 - (int)pcVar2);
    if (pcVar5 == (char *)0x0) {
      FUN_016e9cd0(3,0,0x77,"/aws-lc/crypto/bn_extra/convert.c",0x90);
      param_2 = extraout_r1_00;
    }
    else {
      if (param_1 == (int *)0x0) {
LAB_016e0a40:
        pcVar5 = pcVar5 + uVar9;
        goto LAB_016e09a4;
      }
      piVar8 = (int *)*param_1;
      if (piVar8 == (int *)0x0) {
        uVar12 = FUN_017141d0();
        param_2 = (char *)((ulonglong)uVar12 >> 0x20);
        piVar8 = (int *)uVar12;
        if (piVar8 == (int *)0x0) goto LAB_016e09a0;
      }
      else {
        FUN_01714350(piVar8);
      }
      if ((int)pcVar5 < 0x20000000) {
        uVar12 = FUN_01714cc0(piVar8,(int)pcVar5 * 4);
        param_2 = (char *)((ulonglong)uVar12 >> 0x20);
        if ((int)uVar12 != 0) {
          if ((int)pcVar5 < 1) {
            iVar3 = 0;
          }
          else {
            pcVar4 = pcVar5;
            iVar10 = 0;
            while( true ) {
              pcVar11 = pcVar4;
              if (7 < (int)pcVar4) {
                pcVar11 = &DAT_00000008;
              }
              uVar6 = 0;
              pcVar7 = pcVar2 + (int)pcVar4 + -(int)pcVar11;
              do {
                local_2d = 0;
                iVar3 = FUN_0177b2b4(&local_2d,*pcVar7);
                if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_016d2c94(&DAT_0059aac0,"/aws-lc/crypto/bn_extra/convert.c",0x55,"decode_hex");
                }
                pcVar7 = pcVar7 + 1;
                uVar6 = (uint)local_2d | uVar6 << 4;
              } while (pcVar2 + (int)pcVar4 != pcVar7);
              iVar3 = iVar10 + 1;
              pcVar4 = pcVar4 + -(int)pcVar11;
              *(uint *)(*piVar8 + iVar10 * 4) = uVar6;
              if ((int)pcVar4 < 1) break;
              iVar10 = iVar3;
            }
          }
          if (piVar8[2] < iVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_016d2c94("i <= bn->dmax","/aws-lc/crypto/bn_extra/convert.c",0x5d,"decode_hex");
          }
          piVar8[1] = iVar3;
          FUN_01714f48(piVar8);
          uVar12 = FUN_01717e5c(piVar8);
          param_2 = (char *)((ulonglong)uVar12 >> 0x20);
          if ((int)uVar12 == 0) {
            piVar8[3] = uVar9;
          }
          *param_1 = (int)piVar8;
          goto LAB_016e0a40;
        }
      }
      else {
        FUN_016e9cd0(3,0,0x66,"/aws-lc/crypto/bn_extra/convert.c",0x3f);
        param_2 = extraout_r1;
      }
      if (*param_1 == 0) {
        FUN_017046e0(piVar8);
        param_2 = extraout_r1_01;
      }
    }
  }
LAB_016e09a0:
  pcVar5 = (char *)0x0;
LAB_016e09a4:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pcVar5,param_2,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

