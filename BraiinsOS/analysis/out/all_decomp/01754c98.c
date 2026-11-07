// FUN_01754c98 @ 01754c98 size=856 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_01754c98(uint *param_1,uint *param_2)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c [2];
  
  local_2c[0] = DAT_018ddaf8;
  uVar5 = param_2[0x17];
  if (0x3f < uVar5) {
    FUN_0170793c();
    goto LAB_01754fe8;
  }
  puVar6 = param_2 + 7;
  uVar3 = uVar5 + 1;
  uVar8 = param_2[6];
  uVar7 = param_2[5];
  *(undefined1 *)((int)puVar6 + uVar5) = 0x80;
  if (uVar3 < 0x39) {
    if (uVar3 != 0x38) {
      iVar4 = 0x38 - uVar3;
      puVar2 = (uint *)((int)puVar6 + uVar3);
      goto LAB_01754fb0;
    }
  }
  else {
    if (uVar3 != 0x40) {
      FUN_016dd606((uint *)((int)puVar6 + uVar3),0,0x40 - uVar3);
    }
    if ((DAT_018dfe48 & 8) == 0) {
      if ((DAT_018dfe48 & 1) == 0) {
        FUN_01786fc0();
      }
      else {
        FUN_01787520();
      }
    }
    else {
      FUN_01788240(param_2,puVar6,1);
    }
    iVar4 = 0x38;
    puVar2 = puVar6;
LAB_01754fb0:
    FUN_016dd606(puVar2,0,iVar4);
  }
  puVar2 = param_2 + 0x15;
  if ((&uStack_34 <= puVar2) || (param_2 + 0x16 <= &uStack_34)) {
    if (&uStack_30 <= puVar2 || puVar2 <= &uStack_34) {
      puVar2 = param_2 + 0x16;
      param_2[0x15] =
           uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
      ;
      if (((&uStack_30 <= puVar2) || (param_2 + 0x17 <= &uStack_30)) &&
         (puVar2 <= &uStack_30 || local_2c <= puVar2)) {
        param_2[0x16] =
             uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
             uVar7 >> 0x18;
        if ((DAT_018dfe48 & 8) == 0) {
          if ((DAT_018dfe48 & 1) == 0) {
            FUN_01786fc0();
          }
          else {
            FUN_01787520();
          }
        }
        else {
          FUN_01788240(param_2,puVar6,1);
        }
        param_2[0x17] = 0;
        FUN_016dd606(puVar6,0,0x40);
        if ((&uStack_38 <= param_1) || (param_1 + 1 <= &uStack_38)) {
          uVar5 = *param_2;
          if (param_1 <= &uStack_38 || &uStack_34 <= param_1) {
            puVar6 = param_1 + 1;
            *param_1 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                       uVar5 >> 0x18;
            if ((&uStack_3c <= puVar6) || (param_1 + 2 <= &uStack_3c)) {
              uVar5 = param_2[1];
              if (puVar6 <= &uStack_3c || &uStack_38 <= puVar6) {
                puVar6 = param_1 + 2;
                param_1[1] = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                             (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
                if ((&uStack_40 <= puVar6) || (param_1 + 3 <= &uStack_40)) {
                  uVar5 = param_2[2];
                  if (puVar6 <= &uStack_40 || &uStack_3c <= puVar6) {
                    puVar6 = param_1 + 3;
                    param_1[2] = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                 (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
                    if ((&uStack_44 <= puVar6) || (param_1 + 4 <= &uStack_44)) {
                      uVar5 = param_2[3];
                      if (puVar6 <= &uStack_44 || &uStack_40 <= puVar6) {
                        puVar6 = param_1 + 4;
                        param_1[3] = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                     (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
                        if ((&uStack_48 <= puVar6) || (param_1 + 5 <= &uStack_48)) {
                          uVar5 = param_2[4];
                          if (puVar6 <= &uStack_48 || &uStack_44 <= puVar6) {
                            param_1[4] = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                         (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
                            if (local_2c[0] == DAT_018ddaf8) {
                              return 1;
                            }
LAB_01754fe8:
                    /* WARNING: Subroutine does not return */
                            FUN_016d2b78();
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
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1754fec);
  (*pcVar1)();
}

