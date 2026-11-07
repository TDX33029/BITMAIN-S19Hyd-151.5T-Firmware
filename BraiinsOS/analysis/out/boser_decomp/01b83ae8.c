// FUN_01b83ae8 @ 01b83ae8 size=736 calls_out=7 calls_in=3
// strings: 

char * FUN_01b83ae8(char *param_1,char *param_2,byte *param_3,uint param_4,int param_5,int param_6,
                   uint param_7)

{
  byte *pbVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  uVar6 = -param_6 & 3;
  if ((param_7 < uVar6) || (param_7 - uVar6 < 0x2ec)) {
LAB_01b83bfc:
    pcVar4 = (char *)0xffffffff;
  }
  else {
    if (0xff < param_4) {
      pcVar4 = (char *)0xffffffd2;
      goto LAB_01b83b94;
    }
    param_6 = param_6 + uVar6;
    pcVar4 = (char *)(param_6 + 0x1e0);
    *pcVar4 = '\0';
    for (uVar6 = 0; uVar6 + 1 < param_5 + 1U; uVar6 = uVar6 + 1) {
      pcVar4 = pcVar4 + 1;
      *pcVar4 = (char)param_5 - (char)uVar6;
    }
    puVar5 = (undefined1 *)(param_6 + 0x1ec);
    pbVar1 = param_3 + param_4 * 4;
    while (param_3 != pbVar1) {
      param_3 = param_3 + 4;
      puVar5 = puVar5 + 1;
      *puVar5 = *(undefined1 *)(param_6 + (uint)*param_3 + 0x1e0);
    }
    if (param_2 != (char *)0x0) {
      local_30 = 0xc;
      if ((-param_6 & 3U) - 1 < 0x1e0) goto LAB_01b83bfc;
      if (param_4 < 2) {
LAB_01b83c0c:
        pcVar4 = (char *)0x0;
      }
      else {
        uVar6 = FUN_01b82f2c(param_6 + 400,&local_30,param_6 + 0x1ed,param_4);
        if (param_4 != uVar6) {
          if (uVar6 != 1) {
            uVar2 = FUN_01b82770(6,param_4,local_30);
            uVar9 = 0;
            pcVar4 = (char *)FUN_01b82788(param_6 + 0x1c4,uVar2,param_6 + 400,param_4,local_30,0);
            if ((char *)0xffffff88 < pcVar4) goto LAB_01b83b94;
            pcVar3 = (char *)FUN_01b82680(param_1 + 1,param_2 + -1,param_6 + 0x1c4,local_30,uVar2,
                                          uVar9,param_2 + -1);
            pcVar4 = pcVar3;
            if (((char *)0xffffff88 < pcVar3) ||
               (pcVar4 = (char *)FUN_01b82320(param_6,param_6 + 0x1c4,local_30,uVar2,param_6 + 0xec,
                                              0xa4), (char *)0xffffff88 < pcVar4))
            goto LAB_01b83b94;
            pcVar4 = (char *)FUN_01b82c4c(param_1 + (int)(pcVar3 + 1),param_2 + (-1 - (int)pcVar3),
                                          param_6 + 0x1ed,param_4,param_6);
            if ((char *)0xffffff88 < pcVar4) goto LAB_01b83b94;
            if (pcVar4 != (char *)0x0) {
              pcVar4 = param_1 + (int)(pcVar3 + 1) + ((int)pcVar4 - (int)(param_1 + 1));
              if ((char *)0xffffff88 < pcVar4) goto LAB_01b83b94;
              goto LAB_01b83c10;
            }
          }
          goto LAB_01b83c0c;
        }
        pcVar4 = (char *)0x1;
      }
LAB_01b83c10:
      bVar8 = pcVar4 != (char *)0x0;
      bVar7 = pcVar4 == (char *)0x1;
      if ((char *)0x1 < pcVar4) {
        bVar8 = pcVar4 <= (char *)(param_4 >> 1);
        bVar7 = (char *)(param_4 >> 1) == pcVar4;
      }
      if (bVar8 && !bVar7) {
        *param_1 = (char)pcVar4;
        pcVar4 = pcVar4 + 1;
        goto LAB_01b83b94;
      }
      uVar6 = 0;
      if (0x80 < param_4) goto LAB_01b83bfc;
      pcVar4 = (char *)((param_4 + 1 >> 1) + 1);
      if (pcVar4 <= param_2) {
        *param_1 = (char)param_4 + '\x7f';
        *(undefined1 *)(param_6 + param_4 + 0x1ed) = 0;
        pcVar3 = (char *)(param_6 + 0x1ed);
        for (; uVar6 < param_4; uVar6 = uVar6 + 2) {
          param_1[(uVar6 >> 1) + 1] = pcVar3[1] + *pcVar3 * '\x10';
          pcVar3 = pcVar3 + 2;
        }
        goto LAB_01b83b94;
      }
    }
    pcVar4 = (char *)0xffffffba;
  }
LAB_01b83b94:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return pcVar4;
}

