// FUN_00cd7c18 @ 00cd7c18 size=1204 calls_out=2 calls_in=0
// strings: idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections | idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections | idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections | idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections

undefined4 FUN_00cd7c18(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  
  iVar7 = *(int *)(*param_1 + 4);
  iVar5 = *(int *)(*param_1 + 8);
  uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  if (iVar5 != 0) {
    bVar8 = uVar2 == 0;
    uVar2 = 1;
    if (bVar8) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        local_38 = (undefined4 *)(iVar7 + 8);
        uVar2 = FUN_00fb34b0(param_2,&DAT_00357835,7,&DAT_0035783c,2,iVar7 + 0x10,FUN_008e9ca0,
                             "idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections"
                             ,3,iVar7 + 0x14,FUN_007883b8,&DAT_0035783e,0xb,iVar7,&LAB_00fb13e0,
                             "mcr",3,&local_38,&LAB_00d47ee8);
      }
      else {
        uVar2 = 1;
        iVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
        if (iVar6 == 0) {
          uVar2 = 1;
          local_48 = *param_2;
          local_44 = param_2[1];
          local_39 = 1;
          local_30 = param_2[2];
          uStack_2c = param_2[3];
          local_38 = &local_48;
          local_40 = &local_39;
          local_28 = iVar7 + 8;
          local_34 = &DAT_01880dc4;
          iVar6 = FUN_00fb34b0(&local_38,&DAT_00357835,7,&DAT_0035783c,2,iVar7 + 0x10,FUN_008e9ca0,
                               "idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections"
                               ,3,iVar7 + 0x14,FUN_007883b8,&DAT_0035783e,0xb,iVar7,&LAB_00fb13e0,
                               "mcr",3,&local_28,&LAB_00d47ee8);
          if (iVar6 == 0) {
            uVar2 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2);
          }
        }
      }
    }
    if (iVar5 != 1) {
      iVar5 = iVar5 * 0x18 + -0x18;
      do {
        iVar6 = iVar7 + 0x18;
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        if (uVar1 == 0) {
          if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
            iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar3 == 0) {
              local_38 = (undefined4 *)(iVar7 + 0x20);
              uVar2 = FUN_00fb34b0(param_2,&DAT_00357835,7,&DAT_0035783c,2,iVar7 + 0x28,FUN_008e9ca0
                                   ,
                                   "idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections"
                                   ,3,iVar7 + 0x2c,FUN_007883b8,&DAT_0035783e,0xb,iVar6,
                                   &LAB_00fb13e0,"mcr",3,&local_38,&LAB_00d47ee8);
            }
          }
          else {
            local_48 = *param_2;
            local_44 = param_2[1];
            local_39 = 1;
            local_30 = param_2[2];
            uStack_2c = param_2[3];
            local_40 = &local_39;
            local_34 = &DAT_01880dc4;
            local_38 = &local_48;
            local_28 = iVar7 + 0x20;
            iVar7 = FUN_00fb34b0(&local_38,&DAT_00357835,7,&DAT_0035783c,2,iVar7 + 0x28,FUN_008e9ca0
                                 ,
                                 "idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections"
                                 ,3,iVar7 + 0x2c,FUN_007883b8,&DAT_0035783e,0xb,iVar6,&LAB_00fb13e0,
                                 "mcr",3,&local_28,&LAB_00d47ee8);
            if (iVar7 == 0) {
              uVar2 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        iVar5 = iVar5 + -0x18;
        iVar7 = iVar6;
      } while (iVar5 != 0);
    }
  }
  uVar4 = 1;
  if (uVar2 == 0) {
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
  }
  return uVar4;
}

