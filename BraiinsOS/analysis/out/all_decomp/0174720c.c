// FUN_0174720c @ 0174720c size=432 calls_out=4 calls_in=1
// strings: 

undefined8
FUN_0174720c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
            uint *param_5)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  code *pcVar4;
  uint uVar5;
  uint auStack_40 [2];
  uint auStack_38 [2];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  *param_4 = 0;
  if ((param_5 <= auStack_38 || &local_30 <= param_5) &&
     ((puVar3 = param_5 + 2, auStack_38 <= param_5 || (puVar3 <= auStack_38)))) {
    uVar1 = *param_5;
    local_2c = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
    uVar1 = param_5[1];
    local_30 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
    if ((puVar3 <= auStack_40 || auStack_38 <= puVar3) &&
       ((auStack_40 <= puVar3 || (param_5 + 4 <= auStack_40)))) {
      uVar1 = param_5[3];
      uVar5 = param_5[2];
      local_28 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
                 uVar1 >> 0x18;
      local_24 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                 uVar5 >> 0x18;
      if ((DAT_018dfe48 & 0x20) == 0) {
        if ((DAT_018dfe48 & 1) == 0) {
          FUN_017471a8();
          pcVar2 = FUN_0170aae4;
          pcVar4 = FUN_0170baa0;
        }
        else {
          FUN_01786a00();
          pcVar2 = (code *)&LAB_017053f8;
          pcVar4 = (code *)&LAB_017053e4;
        }
      }
      else {
        FUN_01786d00(param_3,&local_30);
        pcVar2 = (code *)&LAB_01705420;
        pcVar4 = (code *)&LAB_0170540c;
      }
      *param_1 = pcVar2;
      *param_2 = pcVar4;
      if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return 0;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0,0x17473b8);
  (*pcVar2)();
}

