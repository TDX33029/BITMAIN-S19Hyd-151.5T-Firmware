// FUN_015f0090 @ 015f0090 size=228 calls_out=1 calls_in=1
// strings: max_packet | indexInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported | MyIntf | max_packet_size_v4 | addrs

void FUN_015f0090(int *param_1,undefined4 param_2)

{
  int iVar1;
  int local_28;
  
  iVar1 = *param_1;
  local_28 = iVar1 + 0x28;
  FUN_0130400c(param_2,"MyIntf",6,&DAT_0056ee18,4,iVar1 + 0x2c,&LAB_005fdc1c,
               "indexInvalidComponentNameInvalidModifierMissingComponentNameMissingRequiredModifierNotSupported"
               ,5,iVar1 + 0x20,&LAB_01a86300,"addrs",5,iVar1,FUN_015fbc54,"max_packet_size_v4",0x12,
               iVar1 + 0x24,&LAB_01a6a304,"max_packet",0x12,&local_28,&LAB_006616e8);
  return;
}

