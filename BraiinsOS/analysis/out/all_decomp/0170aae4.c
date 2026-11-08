// FUN_0170aae4 @ 0170aae4 size=460 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_0170aae4(uint *param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint auStack_50 [2];
  uint auStack_48 [2];
  uint auStack_40 [2];
  uint auStack_38 [2];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_1c;
  
  puVar4 = param_1 + 2;
  local_1c = DAT_018ddaf8;
  if ((puVar4 <= auStack_38 || &local_30 <= puVar4) &&
     ((auStack_38 <= puVar4 || (param_1 + 4 <= auStack_38)))) {
    uVar2 = param_1[2];
    uVar5 = param_1[3];
    if ((auStack_38 <= param_1 || param_1 <= auStack_40) &&
       (auStack_40 <= param_1 || puVar4 <= auStack_40)) {
      uVar3 = *param_1;
      local_24 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                 uVar3 >> 0x18;
      uVar3 = param_1[1];
      local_28 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                 uVar3 >> 0x18;
      local_30 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                 uVar5 >> 0x18;
      local_2c = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                 uVar2 >> 0x18;
      FUN_017088b0();
      if ((auStack_48 <= param_1 || puVar4 <= auStack_48) &&
         (auStack_40 <= param_1 || param_1 <= auStack_48)) {
        param_1[1] = local_28 << 0x18 | (local_28 >> 8 & 0xff) << 0x10 |
                     (local_28 >> 0x10 & 0xff) << 8 | local_28 >> 0x18;
        *param_1 = local_24 << 0x18 | (local_24 >> 8 & 0xff) << 0x10 |
                   (local_24 >> 0x10 & 0xff) << 8 | local_24 >> 0x18;
        if ((auStack_50 <= puVar4) || (param_1 + 4 <= auStack_50)) {
          if (auStack_48 <= puVar4 || puVar4 <= auStack_50) {
            param_1[3] = local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                         (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18;
            param_1[2] = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 |
                         (local_2c >> 0x10 & 0xff) << 8 | local_2c >> 0x18;
            if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2b78();
            }
            return 0;
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x170acac);
  (*pcVar1)();
}

