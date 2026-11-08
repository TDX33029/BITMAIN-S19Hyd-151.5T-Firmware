// FUN_00093470 @ 00093470  size=2344  callers=3
// program: bmminer


int * FUN_00093470(char *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  int local_18;
  int *local_14;
  int local_10;
  char *local_c;
  
  local_10 = 0;
  local_18 = 0;
  if (param_1 == (char *)0x0) {
    FUN_00095b4c(2,"src/spec.c",0x1dc,"pattern_start is null or 0");
    return (int *)0x0;
  }
  if (param_2 == (int *)0x0) {
    FUN_00095b4c(2,"src/spec.c",0x1dd,"pattern_next is null or 0");
    return (int *)0x0;
  }
  local_14 = calloc(1,0x2434);
  if (local_14 == (int *)0x0) {
    piVar1 = __errno_location();
    FUN_00095b4c(2,"src/spec.c",0x1e1,"calloc fail, errno[%d]",*piVar1);
    return (int *)0x0;
  }
  *local_14 = (int)param_1;
  local_c = param_1;
  if (*param_1 == '%') {
    local_18 = 0;
    local_10 = __isoc99_sscanf(param_1,"%%%[.0-9-]%n",(int)local_14 + 0x1411,&local_18);
    if (local_10 == 1) {
      local_14[0x90a] = (int)FUN_00092f1c;
      local_14[0x90b] = (int)FUN_00093074;
      local_14[0x90c] = (int)FUN_000931cc;
      iVar2 = FUN_000932e0(local_14);
      if (iVar2 != 0) {
        FUN_00095b4c(2,"src/spec.c",499,"zlog_spec_parse_print_fmt fail");
        goto LAB_00093ec8;
      }
    }
    else {
      local_18 = 1;
      local_14[0x90a] = (int)FUN_00092ed8;
      local_14[0x90b] = (int)FUN_00093030;
      local_14[0x90c] = (int)FUN_00093188;
    }
    local_c = local_c + local_18;
    if (*local_c == 'd') {
      if (local_c[1] == '(') {
        iVar2 = strncmp(local_c,"d()",3);
        if (iVar2 == 0) {
          local_14[2] = 0x25204625;
          *(undefined2 *)(local_14 + 3) = 0x54;
          local_c = local_c + 3;
        }
        else {
          local_18 = 0;
          local_10 = __isoc99_sscanf(local_c,"d(%[^)])%n",local_14 + 2,&local_18);
          if (local_10 != 1) {
            local_18 = 0;
          }
          local_c = local_c + local_18;
          if (local_c[-1] != ')') {
            FUN_00095b4c(2,"src/spec.c",0x211,"in string[%s] can\'t find match \')\'",*local_14);
            goto LAB_00093ec8;
          }
        }
      }
      else {
        local_14[2] = 0x25204625;
        *(undefined2 *)(local_14 + 3) = 0x54;
        local_c = local_c + 1;
      }
      local_14[0x403] = *param_3;
      *param_3 = *param_3 + 1;
      local_14[0x909] = (int)FUN_00092140;
      *param_2 = (int)local_c;
      local_14[1] = (int)local_c - *local_14;
    }
    else if (*local_c == 'M') {
      local_18 = 0;
      local_10 = __isoc99_sscanf(local_c,"M(%[^)])%n",local_14 + 0x404,&local_18);
      if (local_10 != 1) {
        local_18 = 0;
        iVar2 = strncmp(local_c,"M()",3);
        if (iVar2 == 0) {
          local_18 = 3;
        }
      }
      local_c = local_c + local_18;
      if (local_c[-1] != ')') {
        FUN_00095b4c(2,"src/spec.c",0x22a,"in string[%s] can\'t find match \')\'",*local_14);
LAB_00093ec8:
        FUN_00093400(local_14);
        return (int *)0x0;
      }
      *param_2 = (int)local_c;
      local_14[1] = (int)local_c - *local_14;
      local_14[0x909] = (int)FUN_00092384;
    }
    else {
      iVar2 = strncmp(local_c,"ms",2);
      if (iVar2 == 0) {
        local_c = local_c + 2;
        *param_2 = (int)local_c;
        local_14[1] = (int)local_c - *local_14;
        local_14[0x909] = (int)FUN_0009228c;
      }
      else {
        iVar2 = strncmp(local_c,"us",2);
        if (iVar2 == 0) {
          local_c = local_c + 2;
          *param_2 = (int)local_c;
          local_14[1] = (int)local_c - *local_14;
          local_14[0x909] = (int)FUN_00092314;
        }
        else {
          *param_2 = (int)(local_c + 1);
          local_14[1] = (int)(local_c + (1 - *local_14));
          switch(*local_c) {
          case '%':
            local_14[0x909] = (int)FUN_00092778;
            break;
          default:
            FUN_00095b4c(2,"src/spec.c",0x27a,"str[%s] in wrong format, p[%c]",*local_14,*local_c);
            goto LAB_00093ec8;
          case 'D':
            local_14[2] = 0x25204625;
            *(undefined2 *)(local_14 + 3) = 0x54;
            local_14[0x403] = *param_3;
            *param_3 = *param_3 + 1;
            local_14[0x909] = (int)FUN_00092140;
            break;
          case 'F':
            local_14[0x909] = (int)FUN_000924c0;
            break;
          case 'H':
            local_14[0x909] = (int)FUN_000926f0;
            break;
          case 'L':
            local_14[0x909] = (int)FUN_00092628;
            break;
          case 'T':
            local_14[0x909] = (int)FUN_000928e4;
            break;
          case 'U':
            local_14[0x909] = (int)FUN_00092674;
            break;
          case 'V':
            local_14[0x909] = (int)FUN_000929f4;
            break;
          case 'c':
            local_14[0x909] = (int)FUN_00092474;
            break;
          case 'f':
            local_14[0x909] = (int)FUN_0009253c;
            break;
          case 'k':
            local_14[0x909] = (int)FUN_00092930;
            break;
          case 'm':
            local_14[0x909] = (int)FUN_00092a68;
            break;
          case 'n':
            local_14[0x909] = (int)FUN_0009273c;
            break;
          case 'p':
            local_14[0x909] = (int)FUN_000927b4;
            break;
          case 't':
            local_14[0x909] = (int)FUN_00092898;
            break;
          case 'v':
            local_14[0x909] = (int)FUN_0009297c;
          }
        }
      }
    }
  }
  else {
    pcVar3 = strchr(param_1,0x25);
    *param_2 = (int)pcVar3;
    if (*param_2 == 0) {
      sVar4 = strlen(local_c);
      local_14[1] = sVar4;
      *param_2 = (int)(local_c + local_14[1]);
    }
    else {
      local_14[1] = *param_2 - (int)local_c;
    }
    local_14[0x909] = (int)FUN_00092430;
    local_14[0x90a] = (int)FUN_00092ed8;
    local_14[0x90b] = (int)FUN_00093030;
    local_14[0x90c] = (int)FUN_00093188;
  }
  FUN_00092028(local_14,0);
  return local_14;
}

