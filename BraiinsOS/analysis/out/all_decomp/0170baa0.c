// FUN_0170baa0 @ 0170baa0 size=688 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_0170baa0(uint *param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint auStack_70 [2];
  uint auStack_68 [2];
  uint auStack_60 [2];
  uint auStack_58 [2];
  uint auStack_50 [2];
  uint auStack_48 [2];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_2c;
  
  puVar10 = param_1 + 2;
  local_2c = DAT_018ddaf8;
  if ((auStack_60 <= puVar10 || puVar10 <= auStack_68) &&
     ((auStack_68 <= puVar10 || (param_1 + 4 <= auStack_68)))) {
    uVar4 = param_1[2];
    uVar5 = param_1[3];
    uVar4 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
            uVar4 >> 0x18;
    uVar5 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
            uVar5 >> 0x18;
    if ((param_1 <= auStack_70 || auStack_68 <= param_1) &&
       (auStack_70 <= param_1 || puVar10 <= auStack_70)) {
      uVar12 = *param_1;
      uVar11 = param_1[1];
      uVar12 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
               uVar12 >> 0x18;
      uVar11 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18;
      if (0xf < param_4) {
        puVar9 = param_3 + 2;
        puVar7 = param_3;
        do {
          if ((auStack_58 < puVar9 && puVar9 < auStack_50) ||
             ((puVar9 < auStack_58 && (auStack_58 < puVar7 + 4)))) goto LAB_0170bd4c;
          uVar2 = puVar7[2];
          uVar3 = puVar7[3];
          if ((auStack_60 < puVar7 && puVar7 < auStack_58) ||
             (puVar7 < auStack_60 && auStack_60 < puVar9)) goto LAB_0170bd4c;
          uVar6 = *puVar7;
          puVar8 = puVar7 + 4;
          puVar9 = puVar9 + 4;
          local_34 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                     uVar6 >> 0x18) ^ uVar12;
          uVar12 = puVar7[1];
          local_38 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                     uVar12 >> 0x18) ^ uVar11;
          local_40 = uVar5 ^ (uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                              (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18);
          local_3c = uVar4 ^ (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                              (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18);
          FUN_017088b0(&local_40,param_2);
          uVar4 = local_3c;
          uVar5 = local_40;
          puVar7 = puVar8;
          uVar11 = local_38;
          uVar12 = local_34;
        } while (puVar8 != (uint *)((int)param_3 + (param_4 & 0xfffffff0)));
      }
      if ((puVar10 <= auStack_48 || auStack_48 <= param_1) &&
         (&local_40 <= param_1 || param_1 <= auStack_48)) {
        *param_1 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                   uVar12 >> 0x18;
        param_1[1] = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                     uVar11 >> 0x18;
        if ((auStack_50 <= puVar10) || (param_1 + 4 <= auStack_50)) {
          if (auStack_48 <= puVar10 || puVar10 <= auStack_50) {
            param_1[3] = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                         uVar5 >> 0x18;
            param_1[2] = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                         uVar4 >> 0x18;
            if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2b78();
            }
            return 0;
          }
        }
      }
    }
  }
LAB_0170bd4c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x170bd4c);
  (*pcVar1)();
}

