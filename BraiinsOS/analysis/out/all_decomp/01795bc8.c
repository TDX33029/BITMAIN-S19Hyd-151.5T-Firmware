// FUN_01795bc8 @ 01795bc8 size=952 calls_out=7 calls_in=3
// strings: 

char * FUN_01795bc8(char *param_1,char *param_2,uint *param_3,uint param_4,int param_5,int param_6,
                   uint param_7)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined4 local_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  uVar9 = -param_6 & 3;
  if ((param_7 < uVar9) || (param_7 - uVar9 < 0x2ec)) goto LAB_01795e74;
  if (0xff < param_4) {
    pcVar5 = (char *)0xffffffd2;
    goto LAB_01795dcc;
  }
  param_6 = param_6 + uVar9;
  uVar9 = param_5 + 1;
  *(undefined1 *)(param_6 + 0x1e0) = 0;
  if (1 < uVar9) {
    cVar2 = (char)param_5;
    *(char *)(param_6 + 0x1e1) = cVar2;
    if ((((((uVar9 != 2) && (*(char *)(param_6 + 0x1e2) = cVar2 + -1, uVar9 != 3)) &&
          (*(char *)(param_6 + 0x1e3) = cVar2 + -2, uVar9 != 4)) &&
         ((*(char *)(param_6 + 0x1e4) = cVar2 + -3, uVar9 != 5 &&
          (*(char *)(param_6 + 0x1e5) = cVar2 + -4, uVar9 != 6)))) &&
        ((*(char *)(param_6 + 0x1e6) = cVar2 + -5, uVar9 != 7 &&
         ((*(char *)(param_6 + 0x1e7) = cVar2 + -6, uVar9 != 8 &&
          (*(char *)(param_6 + 0x1e8) = cVar2 + -7, uVar9 != 9)))))) &&
       ((*(char *)(param_6 + 0x1e9) = cVar2 + -8, uVar9 != 10 &&
        ((*(char *)(param_6 + 0x1ea) = cVar2 + -9, uVar9 != 0xb &&
         (*(char *)(param_6 + 0x1eb) = cVar2 + -10, uVar9 != 0xc)))))) {
      *(char *)(param_6 + 0x1ec) = cVar2 + -0xb;
    }
  }
  if (param_4 != 0) {
    puVar8 = (undefined1 *)(param_6 + 0x1ec);
    puVar3 = param_3 + param_4;
    do {
      param_3 = param_3 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = *(undefined1 *)(param_6 + (*param_3 & 0xff) + 0x1e0);
    } while (puVar3 != param_3);
  }
  if (param_2 == (char *)0x0) {
LAB_01795e6c:
    pcVar5 = (char *)0xffffffba;
    goto LAB_01795dcc;
  }
  local_30 = 0xc;
  if ((-param_6 & 3U) - 1 < 0x1e0) {
LAB_01795e74:
    pcVar5 = (char *)0xffffffff;
  }
  else {
    if (param_4 < 2) {
      if (param_2 < (char *)((param_4 + 1 >> 1) + 1)) goto LAB_01795e6c;
      *param_1 = (char)param_4 + '\x7f';
      *(undefined1 *)(param_6 + param_4 + 0x1ed) = 0;
      if (param_4 == 0) {
        pcVar5 = (char *)0x1;
        goto LAB_01795dcc;
      }
      pcVar5 = (char *)0x2;
    }
    else {
      uVar9 = FUN_01794d04(param_6 + 400,&local_30,param_6 + 0x1ed,param_4);
      if ((param_4 != uVar9) && (uVar9 != 1)) {
        uVar4 = FUN_017943f4(6,param_4,local_30);
        pcVar5 = (char *)FUN_01794460(param_6 + 0x1c4,uVar4,param_6 + 400,param_4,local_30,0);
        if ((char *)0xffffff88 < pcVar5) goto LAB_01795dcc;
        pcVar6 = param_1 + 1;
        pcVar7 = (char *)FUN_017942f0(pcVar6,param_2 + -1,param_6 + 0x1c4,local_30,uVar4);
        pcVar5 = pcVar7;
        if ((char *)0xffffff88 < pcVar7) goto LAB_01795dcc;
        pcVar5 = (char *)FUN_01793f40(param_6,param_6 + 0x1c4,local_30,uVar4,param_6 + 0xec,0xa4);
        if ((char *)0xffffff88 < pcVar5) {
          goto LAB_01795dcc;
        }
        pcVar5 = (char *)FUN_017949e8(pcVar6 + (int)pcVar7,(int)(param_2 + -1) - (int)pcVar7,
                                      param_6 + 0x1ed,param_4,param_6);
        if ((char *)0xffffff88 < pcVar5) goto LAB_01795dcc;
        if (pcVar5 != (char *)0x0) {
          pcVar6 = pcVar6 + (int)pcVar7 + ((int)pcVar5 - (int)pcVar6);
          pcVar5 = pcVar6;
          if ((char *)0xffffff88 < pcVar6) goto LAB_01795dcc;
          bVar11 = pcVar6 != (char *)0x0;
          bVar10 = pcVar6 == (char *)0x1;
          if ((char *)0x1 < pcVar6) {
            bVar11 = pcVar6 <= (char *)(param_4 >> 1);
            bVar10 = (char *)(param_4 >> 1) == pcVar6;
          }
          if (bVar11 && !bVar10) {
            pcVar5 = pcVar6 + 1;
            *param_1 = (char)pcVar6;
            goto LAB_01795dcc;
          }
        }
      }
      if (0x80 < param_4) goto LAB_01795e74;
      pcVar5 = (char *)((param_4 + 1 >> 1) + 1);
      if (param_2 < pcVar5) goto LAB_01795e6c;
      *param_1 = (char)param_4 + '\x7f';
      *(undefined1 *)(param_6 + param_4 + 0x1ed) = 0;
    }
    uVar9 = 0;
    do {
      pcVar6 = (char *)(param_6 + 0x1ed);
      uVar1 = uVar9 >> 1;
      pcVar7 = (char *)(param_6 + 0x1ee);
      uVar9 = uVar9 + 2;
      param_6 = param_6 + 2;
      param_1[uVar1 + 1] = *pcVar7 + *pcVar6 * '\x10';
    } while (uVar9 < param_4);
  }
LAB_01795dcc:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return pcVar5;
}

