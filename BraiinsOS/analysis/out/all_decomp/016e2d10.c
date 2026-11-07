// FUN_016e2d10 @ 016e2d10 size=1104 calls_out=4 calls_in=3
// strings: aws_lc_0_39_0_CRYPTO_chacha_20 | /aws-lc/crypto/chacha/chacha.c | !buffers_alias(out; in_len; in; in_len) || in == out

undefined8
FUN_016e2d10(uint param_1,uint param_2,uint param_3,int *param_4,int *param_5,int param_6)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_2 < param_3 + param_1) {
    uVar3 = param_2;
    if (param_1 != param_2) {
      uVar3 = param_3 + param_2;
    }
    if (param_1 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("!buffers_alias(out, in_len, in, in_len) || in == out",
                   "/aws-lc/crypto/chacha/chacha.c",0x71,"aws_lc_0_39_0_CRYPTO_chacha_20");
    }
  }
  local_5c = param_6;
  if ((param_5 <= &iStack_80 || &iStack_7c <= param_5) &&
     ((piVar2 = param_5 + 1, &iStack_80 <= param_5 || (piVar2 <= &iStack_80)))) {
    local_58 = *param_5;
    if ((piVar2 <= &iStack_84 || &iStack_80 <= piVar2) &&
       ((piVar4 = param_5 + 2, &iStack_84 <= piVar2 || (piVar4 <= &iStack_84)))) {
      local_54 = param_5[1];
      if ((piVar4 <= &iStack_88 || &iStack_84 <= piVar4) &&
         ((&iStack_88 <= piVar4 || (param_5 + 3 <= &iStack_88)))) {
        local_50 = param_5[2];
        if (((uint)param_4 & 3) == 0) {
LAB_016e2e24:
          if (param_3 != 0) {
            do {
              uVar3 = local_5c * -0x40;
              if ((uint)((uint)(local_5c * -0x40) <= param_3) <=
                  -((uint)(local_5c == 0) << 6 | (uint)-local_5c >> 0x1a)) {
                uVar3 = param_3;
              }
              if ((uVar3 < 0xc0) || ((DAT_018dfe48 & 1) == 0)) {
                FUN_017832c0(param_1,param_2,uVar3,param_4,&local_5c);
              }
              else {
                FUN_017836a0(param_1,param_2,uVar3,param_4,&local_5c);
              }
              param_2 = param_2 + uVar3;
              param_1 = param_1 + uVar3;
              param_3 = param_3 - uVar3;
              local_5c = 0;
            } while (param_3 != 0);
          }
          if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
            FUN_016d2b78();
          }
          return 0;
        }
        if ((&local_5c <= param_4 || param_4 <= &iStack_60) &&
           ((piVar2 = param_4 + 1, &iStack_60 <= param_4 || (piVar2 <= &iStack_60)))) {
          local_4c = *param_4;
          if ((&iStack_60 <= piVar2 || piVar2 <= &iStack_64) &&
             ((piVar4 = param_4 + 2, &iStack_64 <= piVar2 || (piVar4 <= &iStack_64)))) {
            local_48 = param_4[1];
            if ((&iStack_64 <= piVar4 || piVar4 <= &iStack_68) &&
               ((piVar2 = param_4 + 3, &iStack_68 <= piVar4 || (piVar2 <= &iStack_68)))) {
              local_44 = param_4[2];
              if ((piVar2 <= &iStack_6c || &iStack_68 <= piVar2) &&
                 ((piVar4 = param_4 + 4, &iStack_6c <= piVar2 || (piVar4 <= &iStack_6c)))) {
                local_40 = param_4[3];
                if ((&iStack_6c <= piVar4 || piVar4 <= &iStack_70) &&
                   ((piVar2 = param_4 + 5, &iStack_70 <= piVar4 || (piVar2 <= &iStack_70)))) {
                  local_3c = param_4[4];
                  if ((&iStack_70 <= piVar2 || piVar2 <= &iStack_74) &&
                     ((piVar4 = param_4 + 6, &iStack_74 <= piVar2 || (piVar4 <= &iStack_74)))) {
                    local_38 = param_4[5];
                    if ((&iStack_74 <= piVar4 || piVar4 <= &iStack_78) &&
                       ((((piVar2 = param_4 + 7, &iStack_78 <= piVar4 || (piVar2 <= &iStack_78)) &&
                         (local_34 = param_4[6], &iStack_78 <= piVar2 || piVar2 <= &iStack_7c)) &&
                        ((&iStack_7c <= piVar2 || (param_4 + 8 <= &iStack_7c)))))) {
                      local_30 = param_4[7];
                      param_4 = &local_4c;
                      goto LAB_016e2e24;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x16e2f1c);
  (*pcVar1)();
}

